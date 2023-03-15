#include "hook.h"
#include <cstring>
#include <cstdio>
#include <unistd.h>
#include <sys/system_properties.h>
#include <dlfcn.h>
#include <dobby.h>
int (*get_screen_height_unity)();
int (*get_screen_width_unity)();
int scrW = 0;
int scrH = 0;
JNIEnv *g_env = nullptr;
#include "Pribludes/autofuscate.hpp"
#include "log.h"
#include "Pribludes/autoimgui.h"
#include <EGL/egl.h>
const char* gamePKG = S("com.axlebolt.standoff2");
#define HOOK(ret, func, ...) \
    ret (*orig##func)(__VA_ARGS__); \
    ret my##func(__VA_ARGS__)

HOOK(void, Input, void *thiz, void *ex_ab, void *ex_ac){
    origInput(thiz, ex_ab, ex_ac);
    if (init) ImGui_ImplAndroid_HandleInputEvent((AInputEvent *)thiz);
    return;
}
void (*old_eglSwapBuffers)(...);
void new_eglSwapBuffers(EGLDisplay display,
                        EGLSurface surface) {
    glInit();
    return old_eglSwapBuffers(display,surface);
}
int isGame(JNIEnv *env, jstring appDataDir) {
    if (!appDataDir)
        return 0;
    g_env = env;
    const char *app_data_dir = env->GetStringUTFChars(appDataDir, nullptr);
    int user = 0;
    static char package_name[256];
    if (sscanf(app_data_dir, S("/data/%*[^/]/%d/%s"), &user, package_name) != 2) {
        if (sscanf(app_data_dir, S("/data/%*[^/]/%s"), package_name) != 1) {
            package_name[0] = '\0';
            LOGW(S("fuck cock limited and sniffed... %s"), app_data_dir);
            return 0;
        }
    }
    if (strcmp(package_name, gamePKG) == 0) {
        LOGI(S("sniffing cock and game: %s"), package_name);
        game_data_dir = new char[strlen(app_data_dir) + 1];
        strcpy(game_data_dir, app_data_dir);
        env->ReleaseStringUTFChars(appDataDir, app_data_dir);
        return 1;
    } else {
        env->ReleaseStringUTFChars(appDataDir, app_data_dir);
        return 0;
    }
}

static int GetAndroidApiLevel() {
    char prop_value[PROP_VALUE_MAX];
    __system_property_get(S("ro.build.version.sdk"), prop_value);
    return atoi(prop_value);
}

void dlopen_process(const char *name, void *handle) {
    //LOGD("dlopen: %s", name);
    if (!il2cpp_handle) {
        if (strstr(name, S("libil2cpp.so"))) {
            il2cpp_handle = handle;
            LOGI(S("Getting new free cock..."));
        }
    }
    if (!unity_handle) {
        if (strstr(name, S("libunity.so"))) {
            unity_handle = handle;
            LOGI(S("Getting new free cock:2..."));
        }
    }
    if (!egl_handle) {
        if (strstr(name, S("libEGL.so"))) {
            egl_handle = handle;
            LOGI(S("Getting new free cock:3..."));
        }
    }
    if (!gl2_handle) {
        if (strstr(name, S("libGLESv2.so"))) {
            gl2_handle = handle;
            LOGI(S("Getting new free cock:4..."));
        }
    }
}

HOOK_DEF(void*, __loader_dlopen, const char *filename, int flags, const void *caller_addr) {
    void *handle = orig___loader_dlopen(filename, flags, caller_addr);
    dlopen_process(filename, handle);
    return handle;
}

HOOK_DEF(void*, do_dlopen_V24, const char *name, int flags, const void *extinfo,
         void *caller_addr) {
    void *handle = orig_do_dlopen_V24(name, flags, extinfo, caller_addr);
    dlopen_process(name, handle);
    return handle;
}

HOOK_DEF(void*, do_dlopen_V19, const char *name, int flags, const void *extinfo) {
    void *handle = orig_do_dlopen_V19(name, flags, extinfo);
    dlopen_process(name, handle);
    return handle;
}

void *hack_thread(void *arg) {
    LOGI(S("coke level id: %d"), gettid());
    int api_level = GetAndroidApiLevel();
    LOGI(S("coke level: %d"), api_level);
    if (api_level >= 33) {
        void *addr = DobbySymbolResolver(nullptr,
                                         S("__dl__Z9do_dlopenPKciPK17android_dlextinfoPKv"));
        if (addr) {
            LOGI(S("get cock at: %p"), addr);
            DobbyHook(addr, (void *) new_do_dlopen_V24,
                      (void **) &orig_do_dlopen_V24);
        }
    } else if (api_level >= 26) {
        void *libdl_handle = dlopen(S("libdl.so"), RTLD_LAZY);
        void *addr = dlsym(libdl_handle, S("__loader_dlopen"));
        LOGI(S("__loader_dlopen at: %p"), addr);
        DobbyHook(addr, (void *) new___loader_dlopen,
                  (void **) &orig___loader_dlopen);
    } else if (api_level >= 24) {
        void *addr = DobbySymbolResolver(nullptr,
                                         S("__dl__Z9do_dlopenPKciPK17android_dlextinfoPv"));
        if (addr) {
            LOGI(S("get cock at: %p"), addr);
            DobbyHook(addr, (void *) new_do_dlopen_V24,
                      (void **) &orig_do_dlopen_V24);
        }
    } else {
        void *addr = DobbySymbolResolver(nullptr,
                                         S("__dl__Z9do_dlopenPKciPK17android_dlextinfo"));
        if (addr) {
            LOGI(S("get cock at: %p"), addr);
            DobbyHook(addr, (void *) new_do_dlopen_V19,
                      (void **) &orig_do_dlopen_V19);
        }
    }
    while (!il2cpp_handle) {
        sleep(1);
    }
    origin_thread(il2cpp_handle);
    sleep(5);
    LOGD(S("origin thread::succes()"));
    while (!unity_handle or !gl2_handle) {
        sleep(1);
    }
    LOGD(S("origin thread::restart()"));
    get_screen_height_unity = (int (*)()) getAdresss((0x26DE358));
    LOGD(S("origin thread::restart1()"));
    get_screen_width_unity = (int (*)()) getAdresss((0x26DE310));
    LOGD(S("origin thread::restart2()"));
    scrW = get_screen_width_unity();
    LOGD(S("origin thread::restart3()"));
    scrH = get_screen_height_unity();
    LOGD(S("origin thread::restart4()"));
    auto eglSwapBuffers = dlsym(unity_handle, S("eglSwapBuffers"));
    const char *dlsym_error = dlerror();
    if (dlsym_error)
    {
        LOGE(S("Cannot load symbol 'cocked': %s"), dlsym_error);
        DobbyHook(eglSwapBuffers, (void *) new_eglSwapBuffers, (void **) &old_eglSwapBuffers);
    } else
    {
        LOGE(S("Trying with mefedron: %s"), dlsym_error);
        DobbyHook(eglSwapBuffers, (void *) new_eglSwapBuffers, (void **) &old_eglSwapBuffers);
    }
    void *sym_input = DobbySymbolResolver(S("/system/lib/libinput.so"), S("_ZN7android13InputConsumer21initializeMotionEventEPNS_11MotionEventEPKNS_12InputMessageE"));
    if (NULL != sym_input){
        LOGW(S("Loading touch inputs...': %s"), dlsym_error);
        DobbyHook((void *)sym_input, (void *) myInput, (void **)&origInput);
    }
    LOGD(S("origin thread::succes()"));
    start_thread(il2cpp_handle);
    LOGD(S("origin thread::init(%100)"));
    return nullptr;
}

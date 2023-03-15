#include "../ImGui/imgui.h"
#include "../ImGui/imgui_impl_android.h"
#include "../ImGui/imgui_impl_opengl3.h"
static bool init;
#include "autofont.h"
void SetBlackGoldTheme()
{
    ImGuiStyle* style = &ImGui::GetStyle();
    ImVec4* colors = style->Colors;

    colors[ImGuiCol_Text]                   = ImVec4(0.92f, 0.92f, 0.92f, 1.00f);
    colors[ImGuiCol_TextDisabled]           = ImVec4(0.44f, 0.44f, 0.44f, 1.00f);
    colors[ImGuiCol_WindowBg]               = ImVec4(0.06f, 0.06f, 0.06f, 1.00f);
    colors[ImGuiCol_ChildBg]                = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_PopupBg]                = ImVec4(0.08f, 0.08f, 0.08f, 0.94f);
    colors[ImGuiCol_Border]                 = ImVec4(0.51f, 0.36f, 0.15f, 1.00f);
    colors[ImGuiCol_BorderShadow]           = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_FrameBg]                = ImVec4(0.11f, 0.11f, 0.11f, 1.00f);
    colors[ImGuiCol_FrameBgHovered]         = ImVec4(0.51f, 0.36f, 0.15f, 1.00f);
    colors[ImGuiCol_FrameBgActive]          = ImVec4(0.78f, 0.55f, 0.21f, 1.00f);
    colors[ImGuiCol_TitleBg]                = ImVec4(0.51f, 0.36f, 0.15f, 1.00f);
    colors[ImGuiCol_TitleBgActive]          = ImVec4(0.91f, 0.64f, 0.13f, 1.00f);
    colors[ImGuiCol_TitleBgCollapsed]       = ImVec4(0.00f, 0.00f, 0.00f, 0.51f);
    colors[ImGuiCol_MenuBarBg]              = ImVec4(0.11f, 0.11f, 0.11f, 1.00f);
    colors[ImGuiCol_ScrollbarBg]            = ImVec4(0.06f, 0.06f, 0.06f, 0.53f);
    colors[ImGuiCol_ScrollbarGrab]          = ImVec4(0.21f, 0.21f, 0.21f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabHovered]   = ImVec4(0.47f, 0.47f, 0.47f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabActive]    = ImVec4(0.81f, 0.83f, 0.81f, 1.00f);
    colors[ImGuiCol_CheckMark]              = ImVec4(0.78f, 0.55f, 0.21f, 1.00f);
    colors[ImGuiCol_SliderGrab]             = ImVec4(0.91f, 0.64f, 0.13f, 1.00f);
    colors[ImGuiCol_SliderGrabActive]       = ImVec4(0.91f, 0.64f, 0.13f, 1.00f);
    colors[ImGuiCol_Button]                 = ImVec4(0.51f, 0.36f, 0.15f, 1.00f);
    colors[ImGuiCol_ButtonHovered]          = ImVec4(0.91f, 0.64f, 0.13f, 1.00f);
    colors[ImGuiCol_ButtonActive]           = ImVec4(0.78f, 0.55f, 0.21f, 1.00f);
    colors[ImGuiCol_Header]                 = ImVec4(0.51f, 0.36f, 0.15f, 1.00f);
    colors[ImGuiCol_HeaderHovered]          = ImVec4(0.91f, 0.64f, 0.13f, 1.00f);
    colors[ImGuiCol_HeaderActive]           = ImVec4(0.93f, 0.65f, 0.14f, 1.00f);
    colors[ImGuiCol_Separator]              = ImVec4(0.21f, 0.21f, 0.21f, 1.00f);
    colors[ImGuiCol_SeparatorHovered]       = ImVec4(0.91f, 0.64f, 0.13f, 1.00f);
    colors[ImGuiCol_SeparatorActive]        = ImVec4(0.78f, 0.55f, 0.21f, 1.00f);
    colors[ImGuiCol_ResizeGrip]             = ImVec4(0.21f, 0.21f, 0.21f, 1.00f);
    colors[ImGuiCol_ResizeGripHovered]      = ImVec4(0.91f, 0.64f, 0.13f, 1.00f);
    colors[ImGuiCol_ResizeGripActive]       = ImVec4(0.78f, 0.55f, 0.21f, 1.00f);
    colors[ImGuiCol_Tab]                    = ImVec4(0.51f, 0.36f, 0.15f, 1.00f);
    colors[ImGuiCol_TabHovered]             = ImVec4(0.91f, 0.64f, 0.13f, 1.00f);
    colors[ImGuiCol_TabActive]              = ImVec4(0.78f, 0.55f, 0.21f, 1.00f);
    colors[ImGuiCol_TabUnfocused]           = ImVec4(0.07f, 0.10f, 0.15f, 0.97f);
    colors[ImGuiCol_TabUnfocusedActive]     = ImVec4(0.14f, 0.26f, 0.42f, 1.00f);
    colors[ImGuiCol_PlotLines]              = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
    colors[ImGuiCol_PlotLinesHovered]       = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
    colors[ImGuiCol_PlotHistogram]          = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
    colors[ImGuiCol_PlotHistogramHovered]   = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
    colors[ImGuiCol_TextSelectedBg]         = ImVec4(0.26f, 0.59f, 0.98f, 0.35f);
    colors[ImGuiCol_DragDropTarget]         = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
    colors[ImGuiCol_NavHighlight]           = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
    colors[ImGuiCol_NavWindowingHighlight]  = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
    colors[ImGuiCol_NavWindowingDimBg]      = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
    colors[ImGuiCol_ModalWindowDimBg]       = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);

    style->FramePadding = ImVec2(4, 2);
    style->ItemSpacing = ImVec2(10, 2);
    style->IndentSpacing = 12;
    style->ScrollbarSize = 10;

    style->WindowRounding = 4;
    style->FrameRounding = 4;
    style->PopupRounding = 4;
    style->ScrollbarRounding = 6;
    style->GrabRounding = 4;
    style->TabRounding = 4;

    //style->WindowTitleAlign = ImVec2(1.0f, 0.5f);
    style->WindowMenuButtonPosition = ImGuiDir_Right;

    style->DisplaySafeAreaPadding = ImVec2(4, 4);
}
void SetDarkGrayTheme()
{
    ImGuiStyle* style = &ImGui::GetStyle();
    ImVec4* colors = style->Colors;

    colors[ImGuiCol_Text]                   = ImVec4(1.000f, 1.000f, 1.000f, 1.000f);
    colors[ImGuiCol_TextDisabled]           = ImVec4(0.500f, 0.500f, 0.500f, 1.000f);
    colors[ImGuiCol_WindowBg]               = ImVec4(0.180f, 0.180f, 0.180f, 1.000f);
    colors[ImGuiCol_ChildBg]                = ImVec4(0.280f, 0.280f, 0.280f, 0.000f);
    colors[ImGuiCol_PopupBg]                = ImVec4(0.313f, 0.313f, 0.313f, 1.000f);
    colors[ImGuiCol_Border]                 = ImVec4(0.266f, 0.266f, 0.266f, 1.000f);
    colors[ImGuiCol_BorderShadow]           = ImVec4(0.000f, 0.000f, 0.000f, 0.000f);
    colors[ImGuiCol_FrameBg]                = ImVec4(0.160f, 0.160f, 0.160f, 1.000f);
    colors[ImGuiCol_FrameBgHovered]         = ImVec4(0.200f, 0.200f, 0.200f, 1.000f);
    colors[ImGuiCol_FrameBgActive]          = ImVec4(0.280f, 0.280f, 0.280f, 1.000f);
    colors[ImGuiCol_TitleBg]                = ImVec4(0.148f, 0.148f, 0.148f, 1.000f);
    colors[ImGuiCol_TitleBgActive]          = ImVec4(0.148f, 0.148f, 0.148f, 1.000f);
    colors[ImGuiCol_TitleBgCollapsed]       = ImVec4(0.148f, 0.148f, 0.148f, 1.000f);
    colors[ImGuiCol_MenuBarBg]              = ImVec4(0.195f, 0.195f, 0.195f, 1.000f);
    colors[ImGuiCol_ScrollbarBg]            = ImVec4(0.160f, 0.160f, 0.160f, 1.000f);
    colors[ImGuiCol_ScrollbarGrab]          = ImVec4(0.277f, 0.277f, 0.277f, 1.000f);
    colors[ImGuiCol_ScrollbarGrabHovered]   = ImVec4(0.300f, 0.300f, 0.300f, 1.000f);
    colors[ImGuiCol_ScrollbarGrabActive]    = ImVec4(1.000f, 0.391f, 0.000f, 1.000f);
    colors[ImGuiCol_CheckMark]              = ImVec4(1.000f, 1.000f, 1.000f, 1.000f);
    colors[ImGuiCol_SliderGrab]             = ImVec4(0.391f, 0.391f, 0.391f, 1.000f);
    colors[ImGuiCol_SliderGrabActive]       = ImVec4(1.000f, 0.391f, 0.000f, 1.000f);
    colors[ImGuiCol_Button]                 = ImVec4(1.000f, 1.000f, 1.000f, 0.000f);
    colors[ImGuiCol_ButtonHovered]          = ImVec4(1.000f, 1.000f, 1.000f, 0.156f);
    colors[ImGuiCol_ButtonActive]           = ImVec4(1.000f, 1.000f, 1.000f, 0.391f);
    colors[ImGuiCol_Header]                 = ImVec4(0.313f, 0.313f, 0.313f, 1.000f);
    colors[ImGuiCol_HeaderHovered]          = ImVec4(0.469f, 0.469f, 0.469f, 1.000f);
    colors[ImGuiCol_HeaderActive]           = ImVec4(0.469f, 0.469f, 0.469f, 1.000f);
    colors[ImGuiCol_Separator]              = colors[ImGuiCol_Border];
    colors[ImGuiCol_SeparatorHovered]       = ImVec4(0.391f, 0.391f, 0.391f, 1.000f);
    colors[ImGuiCol_SeparatorActive]        = ImVec4(1.000f, 0.391f, 0.000f, 1.000f);
    colors[ImGuiCol_ResizeGrip]             = ImVec4(1.000f, 1.000f, 1.000f, 0.250f);
    colors[ImGuiCol_ResizeGripHovered]      = ImVec4(1.000f, 1.000f, 1.000f, 0.670f);
    colors[ImGuiCol_ResizeGripActive]       = ImVec4(1.000f, 0.391f, 0.000f, 1.000f);
    colors[ImGuiCol_Tab]                    = ImVec4(0.098f, 0.098f, 0.098f, 1.000f);
    colors[ImGuiCol_TabHovered]             = ImVec4(0.352f, 0.352f, 0.352f, 1.000f);
    colors[ImGuiCol_TabActive]              = ImVec4(0.195f, 0.195f, 0.195f, 1.000f);
    colors[ImGuiCol_TabUnfocused]           = ImVec4(0.098f, 0.098f, 0.098f, 1.000f);
    colors[ImGuiCol_TabUnfocusedActive]     = ImVec4(0.195f, 0.195f, 0.195f, 1.000f);
    colors[ImGuiCol_PlotLines]              = ImVec4(0.469f, 0.469f, 0.469f, 1.000f);
    colors[ImGuiCol_PlotLinesHovered]       = ImVec4(1.000f, 0.391f, 0.000f, 1.000f);
    colors[ImGuiCol_PlotHistogram]          = ImVec4(0.586f, 0.586f, 0.586f, 1.000f);
    colors[ImGuiCol_PlotHistogramHovered]   = ImVec4(1.000f, 0.391f, 0.000f, 1.000f);
    colors[ImGuiCol_TextSelectedBg]         = ImVec4(1.000f, 1.000f, 1.000f, 0.156f);
    colors[ImGuiCol_DragDropTarget]         = ImVec4(1.000f, 0.391f, 0.000f, 1.000f);
    colors[ImGuiCol_NavHighlight]           = ImVec4(1.000f, 0.391f, 0.000f, 1.000f);
    colors[ImGuiCol_NavWindowingHighlight]  = ImVec4(1.000f, 0.391f, 0.000f, 1.000f);
    colors[ImGuiCol_NavWindowingDimBg]      = ImVec4(0.000f, 0.000f, 0.000f, 0.586f);
    colors[ImGuiCol_ModalWindowDimBg]       = ImVec4(0.000f, 0.000f, 0.000f, 0.586f);

    style->ChildRounding = 4.0f;
    style->FrameBorderSize = 1.0f;
    style->FrameRounding = 2.0f;
    style->GrabMinSize = 7.0f;
    style->PopupRounding = 2.0f;
    style->ScrollbarRounding = 12.0f;
    style->ScrollbarSize = 13.0f;
    style->TabBorderSize = 1.0f;
    style->TabRounding = 0.0f;
    style->WindowRounding = 4.0f;
}
void SetCorporateGrayTheme()
{
    ImGuiStyle & style = ImGui::GetStyle();
    ImVec4 * colors = style.Colors;

    /// 0 = FLAT APPEARENCE
    /// 1 = MORE "3D" LOOK
    int is3D = 1;

    colors[ImGuiCol_Text]                   = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
    colors[ImGuiCol_TextDisabled]           = ImVec4(0.40f, 0.40f, 0.40f, 1.00f);
    colors[ImGuiCol_ChildBg]                = ImVec4(0.25f, 0.25f, 0.25f, 1.00f);
    colors[ImGuiCol_WindowBg]               = ImVec4(0.25f, 0.25f, 0.25f, 1.00f);
    colors[ImGuiCol_PopupBg]                = ImVec4(0.25f, 0.25f, 0.25f, 1.00f);
    colors[ImGuiCol_Border]                 = ImVec4(0.12f, 0.12f, 0.12f, 0.71f);
    colors[ImGuiCol_BorderShadow]           = ImVec4(1.00f, 1.00f, 1.00f, 0.06f);
    colors[ImGuiCol_FrameBg]                = ImVec4(0.42f, 0.42f, 0.42f, 0.54f);
    colors[ImGuiCol_FrameBgHovered]         = ImVec4(0.42f, 0.42f, 0.42f, 0.40f);
    colors[ImGuiCol_FrameBgActive]          = ImVec4(0.56f, 0.56f, 0.56f, 0.67f);
    colors[ImGuiCol_TitleBg]                = ImVec4(0.19f, 0.19f, 0.19f, 1.00f);
    colors[ImGuiCol_TitleBgActive]          = ImVec4(0.22f, 0.22f, 0.22f, 1.00f);
    colors[ImGuiCol_TitleBgCollapsed]       = ImVec4(0.17f, 0.17f, 0.17f, 0.90f);
    colors[ImGuiCol_MenuBarBg]              = ImVec4(0.335f, 0.335f, 0.335f, 1.000f);
    colors[ImGuiCol_ScrollbarBg]            = ImVec4(0.24f, 0.24f, 0.24f, 0.53f);
    colors[ImGuiCol_ScrollbarGrab]          = ImVec4(0.41f, 0.41f, 0.41f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabHovered]   = ImVec4(0.52f, 0.52f, 0.52f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabActive]    = ImVec4(0.76f, 0.76f, 0.76f, 1.00f);
    colors[ImGuiCol_CheckMark]              = ImVec4(0.65f, 0.65f, 0.65f, 1.00f);
    colors[ImGuiCol_SliderGrab]             = ImVec4(0.52f, 0.52f, 0.52f, 1.00f);
    colors[ImGuiCol_SliderGrabActive]       = ImVec4(0.64f, 0.64f, 0.64f, 1.00f);
    colors[ImGuiCol_Button]                 = ImVec4(0.54f, 0.54f, 0.54f, 0.35f);
    colors[ImGuiCol_ButtonHovered]          = ImVec4(0.52f, 0.52f, 0.52f, 0.59f);
    colors[ImGuiCol_ButtonActive]           = ImVec4(0.76f, 0.76f, 0.76f, 1.00f);
    colors[ImGuiCol_Header]                 = ImVec4(0.38f, 0.38f, 0.38f, 1.00f);
    colors[ImGuiCol_HeaderHovered]          = ImVec4(0.47f, 0.47f, 0.47f, 1.00f);
    colors[ImGuiCol_HeaderActive]           = ImVec4(0.76f, 0.76f, 0.76f, 0.77f);
    colors[ImGuiCol_Separator]              = ImVec4(0.000f, 0.000f, 0.000f, 0.137f);
    colors[ImGuiCol_SeparatorHovered]       = ImVec4(0.700f, 0.671f, 0.600f, 0.290f);
    colors[ImGuiCol_SeparatorActive]        = ImVec4(0.702f, 0.671f, 0.600f, 0.674f);
    colors[ImGuiCol_ResizeGrip]             = ImVec4(0.26f, 0.59f, 0.98f, 0.25f);
    colors[ImGuiCol_ResizeGripHovered]      = ImVec4(0.26f, 0.59f, 0.98f, 0.67f);
    colors[ImGuiCol_ResizeGripActive]       = ImVec4(0.26f, 0.59f, 0.98f, 0.95f);
    colors[ImGuiCol_PlotLines]              = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
    colors[ImGuiCol_PlotLinesHovered]       = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
    colors[ImGuiCol_PlotHistogram]          = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
    colors[ImGuiCol_PlotHistogramHovered]   = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
    colors[ImGuiCol_TextSelectedBg]         = ImVec4(0.73f, 0.73f, 0.73f, 0.35f);
    colors[ImGuiCol_ModalWindowDimBg]       = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);
    colors[ImGuiCol_DragDropTarget]         = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
    colors[ImGuiCol_NavHighlight]           = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
    colors[ImGuiCol_NavWindowingHighlight]  = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
    colors[ImGuiCol_NavWindowingDimBg]      = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);

    style.PopupRounding = 3;

    style.WindowPadding = ImVec2(4, 4);
    style.FramePadding  = ImVec2(6, 4);
    style.ItemSpacing   = ImVec2(6, 2);

    style.ScrollbarSize = 18;

    style.WindowBorderSize = 1;
    style.ChildBorderSize  = 1;
    style.PopupBorderSize  = 1;
    style.FrameBorderSize  = is3D;

    style.WindowRounding    = 3;
    style.ChildRounding     = 3;
    style.FrameRounding     = 3;
    style.ScrollbarRounding = 2;
    style.GrabRounding      = 3;
}
void SetYetAnotherDarkTheme()
{
    ImGui::GetStyle().FrameRounding = 4.0f;
    ImGui::GetStyle().GrabRounding = 4.0f;

    ImVec4* colors = ImGui::GetStyle().Colors;
    colors[ImGuiCol_Text] = ImVec4(0.95f, 0.96f, 0.98f, 1.00f);
    colors[ImGuiCol_TextDisabled] = ImVec4(0.36f, 0.42f, 0.47f, 1.00f);
    colors[ImGuiCol_WindowBg] = ImVec4(0.11f, 0.15f, 0.17f, 1.00f);
    colors[ImGuiCol_ChildBg] = ImVec4(0.15f, 0.18f, 0.22f, 1.00f);
    colors[ImGuiCol_PopupBg] = ImVec4(0.08f, 0.08f, 0.08f, 0.94f);
    colors[ImGuiCol_Border] = ImVec4(0.08f, 0.10f, 0.12f, 1.00f);
    colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_FrameBg] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
    colors[ImGuiCol_FrameBgHovered] = ImVec4(0.12f, 0.20f, 0.28f, 1.00f);
    colors[ImGuiCol_FrameBgActive] = ImVec4(0.09f, 0.12f, 0.14f, 1.00f);
    colors[ImGuiCol_TitleBg] = ImVec4(0.09f, 0.12f, 0.14f, 0.65f);
    colors[ImGuiCol_TitleBgActive] = ImVec4(0.08f, 0.10f, 0.12f, 1.00f);
    colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 0.51f);
    colors[ImGuiCol_MenuBarBg] = ImVec4(0.15f, 0.18f, 0.22f, 1.00f);
    colors[ImGuiCol_ScrollbarBg] = ImVec4(0.02f, 0.02f, 0.02f, 0.39f);
    colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.18f, 0.22f, 0.25f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.09f, 0.21f, 0.31f, 1.00f);
    colors[ImGuiCol_CheckMark] = ImVec4(0.28f, 0.56f, 1.00f, 1.00f);
    colors[ImGuiCol_SliderGrab] = ImVec4(0.28f, 0.56f, 1.00f, 1.00f);
    colors[ImGuiCol_SliderGrabActive] = ImVec4(0.37f, 0.61f, 1.00f, 1.00f);
    colors[ImGuiCol_Button] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
    colors[ImGuiCol_ButtonHovered] = ImVec4(0.28f, 0.56f, 1.00f, 1.00f);
    colors[ImGuiCol_ButtonActive] = ImVec4(0.06f, 0.53f, 0.98f, 1.00f);
    colors[ImGuiCol_Header] = ImVec4(0.20f, 0.25f, 0.29f, 0.55f);
    colors[ImGuiCol_HeaderHovered] = ImVec4(0.26f, 0.59f, 0.98f, 0.80f);
    colors[ImGuiCol_HeaderActive] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
    colors[ImGuiCol_Separator] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
    colors[ImGuiCol_SeparatorHovered] = ImVec4(0.10f, 0.40f, 0.75f, 0.78f);
    colors[ImGuiCol_SeparatorActive] = ImVec4(0.10f, 0.40f, 0.75f, 1.00f);
    colors[ImGuiCol_ResizeGrip] = ImVec4(0.26f, 0.59f, 0.98f, 0.25f);
    colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.26f, 0.59f, 0.98f, 0.67f);
    colors[ImGuiCol_ResizeGripActive] = ImVec4(0.26f, 0.59f, 0.98f, 0.95f);
    colors[ImGuiCol_Tab] = ImVec4(0.11f, 0.15f, 0.17f, 1.00f);
    colors[ImGuiCol_TabHovered] = ImVec4(0.26f, 0.59f, 0.98f, 0.80f);
    colors[ImGuiCol_TabActive] = ImVec4(0.20f, 0.25f, 0.29f, 1.00f);
    colors[ImGuiCol_TabUnfocused] = ImVec4(0.11f, 0.15f, 0.17f, 1.00f);
    colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.11f, 0.15f, 0.17f, 1.00f);
    colors[ImGuiCol_PlotLines] = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
    colors[ImGuiCol_PlotLinesHovered] = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
    colors[ImGuiCol_PlotHistogram] = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
    colors[ImGuiCol_PlotHistogramHovered] = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
    colors[ImGuiCol_TextSelectedBg] = ImVec4(0.26f, 0.59f, 0.98f, 0.35f);
    colors[ImGuiCol_DragDropTarget] = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
    colors[ImGuiCol_NavHighlight] = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
    colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
    colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
    colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);
}
void SetSoftDarkRedTheme()
{
    auto& style = ImGui::GetStyle();
    style.FrameRounding = 4.0f;
    style.WindowBorderSize = 0.0f;
    style.PopupBorderSize = 0.0f;
    style.GrabRounding = 4.0f;

    ImVec4* colors = ImGui::GetStyle().Colors;
    colors[ImGuiCol_Text]                   = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
    colors[ImGuiCol_TextDisabled]           = ImVec4(0.73f, 0.75f, 0.74f, 1.00f);
    colors[ImGuiCol_WindowBg]               = ImVec4(0.09f, 0.09f, 0.09f, 0.94f);
    colors[ImGuiCol_ChildBg]                = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_PopupBg]                = ImVec4(0.08f, 0.08f, 0.08f, 0.94f);
    colors[ImGuiCol_Border]                 = ImVec4(0.20f, 0.20f, 0.20f, 0.50f);
    colors[ImGuiCol_BorderShadow]           = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_FrameBg]                = ImVec4(0.71f, 0.39f, 0.39f, 0.54f);
    colors[ImGuiCol_FrameBgHovered]         = ImVec4(0.84f, 0.66f, 0.66f, 0.40f);
    colors[ImGuiCol_FrameBgActive]          = ImVec4(0.84f, 0.66f, 0.66f, 0.67f);
    colors[ImGuiCol_TitleBg]                = ImVec4(0.47f, 0.22f, 0.22f, 0.67f);
    colors[ImGuiCol_TitleBgActive]          = ImVec4(0.47f, 0.22f, 0.22f, 1.00f);
    colors[ImGuiCol_TitleBgCollapsed]       = ImVec4(0.47f, 0.22f, 0.22f, 0.67f);
    colors[ImGuiCol_MenuBarBg]              = ImVec4(0.34f, 0.16f, 0.16f, 1.00f);
    colors[ImGuiCol_ScrollbarBg]            = ImVec4(0.02f, 0.02f, 0.02f, 0.53f);
    colors[ImGuiCol_ScrollbarGrab]          = ImVec4(0.31f, 0.31f, 0.31f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabHovered]   = ImVec4(0.41f, 0.41f, 0.41f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabActive]    = ImVec4(0.51f, 0.51f, 0.51f, 1.00f);
    colors[ImGuiCol_CheckMark]              = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
    colors[ImGuiCol_SliderGrab]             = ImVec4(0.71f, 0.39f, 0.39f, 1.00f);
    colors[ImGuiCol_SliderGrabActive]       = ImVec4(0.84f, 0.66f, 0.66f, 1.00f);
    colors[ImGuiCol_Button]                 = ImVec4(0.47f, 0.22f, 0.22f, 0.65f);
    colors[ImGuiCol_ButtonHovered]          = ImVec4(0.71f, 0.39f, 0.39f, 0.65f);
    colors[ImGuiCol_ButtonActive]           = ImVec4(0.20f, 0.20f, 0.20f, 0.50f);
    colors[ImGuiCol_Header]                 = ImVec4(0.71f, 0.39f, 0.39f, 0.54f);
    colors[ImGuiCol_HeaderHovered]          = ImVec4(0.84f, 0.66f, 0.66f, 0.65f);
    colors[ImGuiCol_HeaderActive]           = ImVec4(0.84f, 0.66f, 0.66f, 0.00f);
    colors[ImGuiCol_Separator]              = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
    colors[ImGuiCol_SeparatorHovered]       = ImVec4(0.71f, 0.39f, 0.39f, 0.54f);
    colors[ImGuiCol_SeparatorActive]        = ImVec4(0.71f, 0.39f, 0.39f, 0.54f);
    colors[ImGuiCol_ResizeGrip]             = ImVec4(0.71f, 0.39f, 0.39f, 0.54f);
    colors[ImGuiCol_ResizeGripHovered]      = ImVec4(0.84f, 0.66f, 0.66f, 0.66f);
    colors[ImGuiCol_ResizeGripActive]       = ImVec4(0.84f, 0.66f, 0.66f, 0.66f);
    colors[ImGuiCol_Tab]                    = ImVec4(0.71f, 0.39f, 0.39f, 0.54f);
    colors[ImGuiCol_TabHovered]             = ImVec4(0.84f, 0.66f, 0.66f, 0.66f);
    colors[ImGuiCol_TabActive]              = ImVec4(0.84f, 0.66f, 0.66f, 0.66f);
    colors[ImGuiCol_TabUnfocused]           = ImVec4(0.07f, 0.10f, 0.15f, 0.97f);
    colors[ImGuiCol_TabUnfocusedActive]     = ImVec4(0.14f, 0.26f, 0.42f, 1.00f);
    colors[ImGuiCol_PlotLines]              = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
    colors[ImGuiCol_PlotLinesHovered]       = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
    colors[ImGuiCol_PlotHistogram]          = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
    colors[ImGuiCol_PlotHistogramHovered]   = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
    colors[ImGuiCol_TextSelectedBg]         = ImVec4(0.26f, 0.59f, 0.98f, 0.35f);
    colors[ImGuiCol_DragDropTarget]         = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
    colors[ImGuiCol_NavHighlight]           = ImVec4(0.41f, 0.41f, 0.41f, 1.00f);
    colors[ImGuiCol_NavWindowingHighlight]  = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
    colors[ImGuiCol_NavWindowingDimBg]      = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
    colors[ImGuiCol_ModalWindowDimBg]       = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);
}
void SetClassicSteamHalfLifeTheme()
{
    ImVec4* colors = ImGui::GetStyle().Colors;
    colors[ImGuiCol_Text]                              = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
    colors[ImGuiCol_TextDisabled]              = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
    colors[ImGuiCol_WindowBg]                          = ImVec4(0.29f, 0.34f, 0.26f, 1.00f);
    colors[ImGuiCol_ChildBg]                                = ImVec4(0.29f, 0.34f, 0.26f, 1.00f);
    colors[ImGuiCol_PopupBg]                                = ImVec4(0.24f, 0.27f, 0.20f, 1.00f);
    colors[ImGuiCol_Border]                          = ImVec4(0.54f, 0.57f, 0.51f, 0.50f);
    colors[ImGuiCol_BorderShadow]              = ImVec4(0.14f, 0.16f, 0.11f, 0.52f);
    colors[ImGuiCol_FrameBg]                                = ImVec4(0.24f, 0.27f, 0.20f, 1.00f);
    colors[ImGuiCol_FrameBgHovered]          = ImVec4(0.27f, 0.30f, 0.23f, 1.00f);
    colors[ImGuiCol_FrameBgActive]            = ImVec4(0.30f, 0.34f, 0.26f, 1.00f);
    colors[ImGuiCol_TitleBg]                                = ImVec4(0.24f, 0.27f, 0.20f, 1.00f);
    colors[ImGuiCol_TitleBgActive]            = ImVec4(0.29f, 0.34f, 0.26f, 1.00f);
    colors[ImGuiCol_TitleBgCollapsed]          = ImVec4(0.00f, 0.00f, 0.00f, 0.51f);
    colors[ImGuiCol_MenuBarBg]                        = ImVec4(0.24f, 0.27f, 0.20f, 1.00f);
    colors[ImGuiCol_ScrollbarBg]                    = ImVec4(0.35f, 0.42f, 0.31f, 1.00f);
    colors[ImGuiCol_ScrollbarGrab]            = ImVec4(0.28f, 0.32f, 0.24f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabHovered]   = ImVec4(0.25f, 0.30f, 0.22f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabActive]    = ImVec4(0.23f, 0.27f, 0.21f, 1.00f);
    colors[ImGuiCol_CheckMark]                        = ImVec4(0.59f, 0.54f, 0.18f, 1.00f);
    colors[ImGuiCol_SliderGrab]                      = ImVec4(0.35f, 0.42f, 0.31f, 1.00f);
    colors[ImGuiCol_SliderGrabActive]          = ImVec4(0.54f, 0.57f, 0.51f, 0.50f);
    colors[ImGuiCol_Button]                          = ImVec4(0.29f, 0.34f, 0.26f, 0.40f);
    colors[ImGuiCol_ButtonHovered]            = ImVec4(0.35f, 0.42f, 0.31f, 1.00f);
    colors[ImGuiCol_ButtonActive]              = ImVec4(0.54f, 0.57f, 0.51f, 0.50f);
    colors[ImGuiCol_Header]                          = ImVec4(0.35f, 0.42f, 0.31f, 1.00f);
    colors[ImGuiCol_HeaderHovered]            = ImVec4(0.35f, 0.42f, 0.31f, 0.6f);
    colors[ImGuiCol_HeaderActive]              = ImVec4(0.54f, 0.57f, 0.51f, 0.50f);
    colors[ImGuiCol_Separator]                        = ImVec4(0.14f, 0.16f, 0.11f, 1.00f);
    colors[ImGuiCol_SeparatorHovered]          = ImVec4(0.54f, 0.57f, 0.51f, 1.00f);
    colors[ImGuiCol_SeparatorActive]                = ImVec4(0.59f, 0.54f, 0.18f, 1.00f);
    colors[ImGuiCol_ResizeGrip]                      = ImVec4(0.19f, 0.23f, 0.18f, 0.00f); // grip invis
    colors[ImGuiCol_ResizeGripHovered]        = ImVec4(0.54f, 0.57f, 0.51f, 1.00f);
    colors[ImGuiCol_ResizeGripActive]          = ImVec4(0.59f, 0.54f, 0.18f, 1.00f);
    colors[ImGuiCol_Tab]                                    = ImVec4(0.35f, 0.42f, 0.31f, 1.00f);
    colors[ImGuiCol_TabHovered]                      = ImVec4(0.54f, 0.57f, 0.51f, 0.78f);
    colors[ImGuiCol_TabActive]                        = ImVec4(0.59f, 0.54f, 0.18f, 1.00f);
    colors[ImGuiCol_TabUnfocused]              = ImVec4(0.24f, 0.27f, 0.20f, 1.00f);
    colors[ImGuiCol_TabUnfocusedActive]      = ImVec4(0.35f, 0.42f, 0.31f, 1.00f);
    colors[ImGuiCol_PlotLines]                        = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
    colors[ImGuiCol_PlotLinesHovered]          = ImVec4(0.59f, 0.54f, 0.18f, 1.00f);
    colors[ImGuiCol_PlotHistogram]            = ImVec4(1.00f, 0.78f, 0.28f, 1.00f);
    colors[ImGuiCol_PlotHistogramHovered]   = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
    colors[ImGuiCol_TextSelectedBg]          = ImVec4(0.59f, 0.54f, 0.18f, 1.00f);
    colors[ImGuiCol_DragDropTarget]          = ImVec4(0.73f, 0.67f, 0.24f, 1.00f);
    colors[ImGuiCol_NavHighlight]              = ImVec4(0.59f, 0.54f, 0.18f, 1.00f);
    colors[ImGuiCol_NavWindowingHighlight]  = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
    colors[ImGuiCol_NavWindowingDimBg]        = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
    colors[ImGuiCol_ModalWindowDimBg]          = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);

    ImGuiStyle& style = ImGui::GetStyle();
    style.FrameBorderSize = 1.0f;
    style.WindowRounding = 0.0f;
    style.ChildRounding = 0.0f;
    style.FrameRounding = 0.0f;
    style.PopupRounding = 0.0f;
    style.ScrollbarRounding = 0.0f;
    style.GrabRounding = 0.0f;
    style.TabRounding = 0.0f;
}
void SetYesAnotherDarkTheme()
{
    constexpr auto ColorFromBytes = [](uint8_t r, uint8_t g, uint8_t b)
    {
        return ImVec4((float)r / 255.0f, (float)g / 255.0f, (float)b / 255.0f, 1.0f);
    };

    auto& style = ImGui::GetStyle();
    ImVec4* colors = style.Colors;

    const ImVec4 bgColor           = ColorFromBytes(37, 37, 38);
    const ImVec4 lightBgColor      = ColorFromBytes(82, 82, 85);
    const ImVec4 veryLightBgColor  = ColorFromBytes(90, 90, 95);

    const ImVec4 panelColor        = ColorFromBytes(51, 51, 55);
    const ImVec4 panelHoverColor   = ColorFromBytes(29, 151, 236);
    const ImVec4 panelActiveColor  = ColorFromBytes(0, 119, 200);

    const ImVec4 textColor         = ColorFromBytes(255, 255, 255);
    const ImVec4 textDisabledColor = ColorFromBytes(151, 151, 151);
    const ImVec4 borderColor       = ColorFromBytes(78, 78, 78);

    colors[ImGuiCol_Text]                 = textColor;
    colors[ImGuiCol_TextDisabled]         = textDisabledColor;
    colors[ImGuiCol_TextSelectedBg]       = panelActiveColor;
    colors[ImGuiCol_WindowBg]             = bgColor;
    colors[ImGuiCol_ChildBg]              = bgColor;
    colors[ImGuiCol_PopupBg]              = bgColor;
    colors[ImGuiCol_Border]               = borderColor;
    colors[ImGuiCol_BorderShadow]         = borderColor;
    colors[ImGuiCol_FrameBg]              = panelColor;
    colors[ImGuiCol_FrameBgHovered]       = panelHoverColor;
    colors[ImGuiCol_FrameBgActive]        = panelActiveColor;
    colors[ImGuiCol_TitleBg]              = bgColor;
    colors[ImGuiCol_TitleBgActive]        = bgColor;
    colors[ImGuiCol_TitleBgCollapsed]     = bgColor;
    colors[ImGuiCol_MenuBarBg]            = panelColor;
    colors[ImGuiCol_ScrollbarBg]          = panelColor;
    colors[ImGuiCol_ScrollbarGrab]        = lightBgColor;
    colors[ImGuiCol_ScrollbarGrabHovered] = veryLightBgColor;
    colors[ImGuiCol_ScrollbarGrabActive]  = veryLightBgColor;
    colors[ImGuiCol_CheckMark]            = panelActiveColor;
    colors[ImGuiCol_SliderGrab]           = panelHoverColor;
    colors[ImGuiCol_SliderGrabActive]     = panelActiveColor;
    colors[ImGuiCol_Button]               = panelColor;
    colors[ImGuiCol_ButtonHovered]        = panelHoverColor;
    colors[ImGuiCol_ButtonActive]         = panelHoverColor;
    colors[ImGuiCol_Header]               = panelColor;
    colors[ImGuiCol_HeaderHovered]        = panelHoverColor;
    colors[ImGuiCol_HeaderActive]         = panelActiveColor;
    colors[ImGuiCol_Separator]            = borderColor;
    colors[ImGuiCol_SeparatorHovered]     = borderColor;
    colors[ImGuiCol_SeparatorActive]      = borderColor;
    colors[ImGuiCol_ResizeGrip]           = bgColor;
    colors[ImGuiCol_ResizeGripHovered]    = panelColor;
    colors[ImGuiCol_ResizeGripActive]     = lightBgColor;
    colors[ImGuiCol_PlotLines]            = panelActiveColor;
    colors[ImGuiCol_PlotLinesHovered]     = panelHoverColor;
    colors[ImGuiCol_PlotHistogram]        = panelActiveColor;
    colors[ImGuiCol_PlotHistogramHovered] = panelHoverColor;
    colors[ImGuiCol_DragDropTarget]       = bgColor;
    colors[ImGuiCol_NavHighlight]         = bgColor;
    colors[ImGuiCol_Tab]                  = bgColor;
    colors[ImGuiCol_TabActive]            = panelActiveColor;
    colors[ImGuiCol_TabUnfocused]         = bgColor;
    colors[ImGuiCol_TabUnfocusedActive]   = panelActiveColor;
    colors[ImGuiCol_TabHovered]           = panelHoverColor;

    style.WindowRounding    = 0.0f;
    style.ChildRounding     = 0.0f;
    style.FrameRounding     = 0.0f;
    style.GrabRounding      = 0.0f;
    style.PopupRounding     = 0.0f;
    style.ScrollbarRounding = 0.0f;
    style.TabRounding       = 0.0f;
}
void SetAnotherDarkThemeReally()
{
    ImGuiStyle& style = ImGui::GetStyle();
    style.Colors[ImGuiCol_Text]                  = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
    style.Colors[ImGuiCol_TextDisabled]          = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
    style.Colors[ImGuiCol_WindowBg]              = ImVec4(0.13f, 0.14f, 0.15f, 1.00f);
    style.Colors[ImGuiCol_ChildBg]               = ImVec4(0.13f, 0.14f, 0.15f, 1.00f);
    style.Colors[ImGuiCol_PopupBg]               = ImVec4(0.13f, 0.14f, 0.15f, 1.00f);
    style.Colors[ImGuiCol_Border]                = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
    style.Colors[ImGuiCol_BorderShadow]          = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    style.Colors[ImGuiCol_FrameBg]               = ImVec4(0.25f, 0.25f, 0.25f, 1.00f);
    style.Colors[ImGuiCol_FrameBgHovered]        = ImVec4(0.38f, 0.38f, 0.38f, 1.00f);
    style.Colors[ImGuiCol_FrameBgActive]         = ImVec4(0.67f, 0.67f, 0.67f, 0.39f);
    style.Colors[ImGuiCol_TitleBg]               = ImVec4(0.08f, 0.08f, 0.09f, 1.00f);
    style.Colors[ImGuiCol_TitleBgActive]         = ImVec4(0.08f, 0.08f, 0.09f, 1.00f);
    style.Colors[ImGuiCol_TitleBgCollapsed]      = ImVec4(0.00f, 0.00f, 0.00f, 0.51f);
    style.Colors[ImGuiCol_MenuBarBg]             = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
    style.Colors[ImGuiCol_ScrollbarBg]           = ImVec4(0.02f, 0.02f, 0.02f, 0.53f);
    style.Colors[ImGuiCol_ScrollbarGrab]         = ImVec4(0.31f, 0.31f, 0.31f, 1.00f);
    style.Colors[ImGuiCol_ScrollbarGrabHovered]  = ImVec4(0.41f, 0.41f, 0.41f, 1.00f);
    style.Colors[ImGuiCol_ScrollbarGrabActive]   = ImVec4(0.51f, 0.51f, 0.51f, 1.00f);
    style.Colors[ImGuiCol_CheckMark]             = ImVec4(0.11f, 0.64f, 0.92f, 1.00f);
    style.Colors[ImGuiCol_SliderGrab]            = ImVec4(0.11f, 0.64f, 0.92f, 1.00f);
    style.Colors[ImGuiCol_SliderGrabActive]      = ImVec4(0.08f, 0.50f, 0.72f, 1.00f);
    style.Colors[ImGuiCol_Button]                = ImVec4(0.25f, 0.25f, 0.25f, 1.00f);
    style.Colors[ImGuiCol_ButtonHovered]         = ImVec4(0.38f, 0.38f, 0.38f, 1.00f);
    style.Colors[ImGuiCol_ButtonActive]          = ImVec4(0.67f, 0.67f, 0.67f, 0.39f);
    style.Colors[ImGuiCol_Header]                = ImVec4(0.22f, 0.22f, 0.22f, 1.00f);
    style.Colors[ImGuiCol_HeaderHovered]         = ImVec4(0.25f, 0.25f, 0.25f, 1.00f);
    style.Colors[ImGuiCol_HeaderActive]          = ImVec4(0.67f, 0.67f, 0.67f, 0.39f);
    style.Colors[ImGuiCol_Separator]             = style.Colors[ImGuiCol_Border];
    style.Colors[ImGuiCol_SeparatorHovered]      = ImVec4(0.41f, 0.42f, 0.44f, 1.00f);
    style.Colors[ImGuiCol_SeparatorActive]       = ImVec4(0.26f, 0.59f, 0.98f, 0.95f);
    style.Colors[ImGuiCol_ResizeGrip]            = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    style.Colors[ImGuiCol_ResizeGripHovered]     = ImVec4(0.29f, 0.30f, 0.31f, 0.67f);
    style.Colors[ImGuiCol_ResizeGripActive]      = ImVec4(0.26f, 0.59f, 0.98f, 0.95f);
    style.Colors[ImGuiCol_Tab]                   = ImVec4(0.08f, 0.08f, 0.09f, 0.83f);
    style.Colors[ImGuiCol_TabHovered]            = ImVec4(0.33f, 0.34f, 0.36f, 0.83f);
    style.Colors[ImGuiCol_TabActive]             = ImVec4(0.23f, 0.23f, 0.24f, 1.00f);
    style.Colors[ImGuiCol_TabUnfocused]          = ImVec4(0.08f, 0.08f, 0.09f, 1.00f);
    style.Colors[ImGuiCol_TabUnfocusedActive]    = ImVec4(0.13f, 0.14f, 0.15f, 1.00f);
    style.Colors[ImGuiCol_PlotLines]             = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
    style.Colors[ImGuiCol_PlotLinesHovered]      = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
    style.Colors[ImGuiCol_PlotHistogram]         = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
    style.Colors[ImGuiCol_PlotHistogramHovered]  = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
    style.Colors[ImGuiCol_TextSelectedBg]        = ImVec4(0.26f, 0.59f, 0.98f, 0.35f);
    style.Colors[ImGuiCol_DragDropTarget]        = ImVec4(0.11f, 0.64f, 0.92f, 1.00f);
    style.Colors[ImGuiCol_NavHighlight]          = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
    style.Colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
    style.Colors[ImGuiCol_NavWindowingDimBg]     = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
    style.Colors[ImGuiCol_ModalWindowDimBg]      = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);
    style.GrabRounding                           = style.FrameRounding = 2.3f;
}
void SetDarkGreenBlueTheme()
{
    ImVec4* colors = ImGui::GetStyle().Colors;
    colors[ImGuiCol_Text]                   = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
    colors[ImGuiCol_TextDisabled]           = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
    colors[ImGuiCol_WindowBg]               = ImVec4(0.06f, 0.06f, 0.06f, 0.94f);
    colors[ImGuiCol_ChildBg]                = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_PopupBg]                = ImVec4(0.08f, 0.08f, 0.08f, 0.94f);
    colors[ImGuiCol_Border]                 = ImVec4(0.43f, 0.43f, 0.50f, 0.50f);
    colors[ImGuiCol_BorderShadow]           = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_FrameBg]                = ImVec4(0.44f, 0.44f, 0.44f, 0.60f);
    colors[ImGuiCol_FrameBgHovered]         = ImVec4(0.57f, 0.57f, 0.57f, 0.70f);
    colors[ImGuiCol_FrameBgActive]          = ImVec4(0.76f, 0.76f, 0.76f, 0.80f);
    colors[ImGuiCol_TitleBg]                = ImVec4(0.04f, 0.04f, 0.04f, 1.00f);
    colors[ImGuiCol_TitleBgActive]          = ImVec4(0.16f, 0.16f, 0.16f, 1.00f);
    colors[ImGuiCol_TitleBgCollapsed]       = ImVec4(0.00f, 0.00f, 0.00f, 0.60f);
    colors[ImGuiCol_MenuBarBg]              = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
    colors[ImGuiCol_ScrollbarBg]            = ImVec4(0.02f, 0.02f, 0.02f, 0.53f);
    colors[ImGuiCol_ScrollbarGrab]          = ImVec4(0.31f, 0.31f, 0.31f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabHovered]   = ImVec4(0.41f, 0.41f, 0.41f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabActive]    = ImVec4(0.51f, 0.51f, 0.51f, 1.00f);
    colors[ImGuiCol_CheckMark]              = ImVec4(0.13f, 0.75f, 0.55f, 0.80f);
    colors[ImGuiCol_SliderGrab]             = ImVec4(0.13f, 0.75f, 0.75f, 0.80f);
    colors[ImGuiCol_SliderGrabActive]       = ImVec4(0.13f, 0.75f, 1.00f, 0.80f);
    colors[ImGuiCol_Button]                 = ImVec4(0.13f, 0.75f, 0.55f, 0.40f);
    colors[ImGuiCol_ButtonHovered]          = ImVec4(0.13f, 0.75f, 0.75f, 0.60f);
    colors[ImGuiCol_ButtonActive]           = ImVec4(0.13f, 0.75f, 1.00f, 0.80f);
    colors[ImGuiCol_Header]                 = ImVec4(0.13f, 0.75f, 0.55f, 0.40f);
    colors[ImGuiCol_HeaderHovered]          = ImVec4(0.13f, 0.75f, 0.75f, 0.60f);
    colors[ImGuiCol_HeaderActive]           = ImVec4(0.13f, 0.75f, 1.00f, 0.80f);
    colors[ImGuiCol_Separator]              = ImVec4(0.13f, 0.75f, 0.55f, 0.40f);
    colors[ImGuiCol_SeparatorHovered]       = ImVec4(0.13f, 0.75f, 0.75f, 0.60f);
    colors[ImGuiCol_SeparatorActive]        = ImVec4(0.13f, 0.75f, 1.00f, 0.80f);
    colors[ImGuiCol_ResizeGrip]             = ImVec4(0.13f, 0.75f, 0.55f, 0.40f);
    colors[ImGuiCol_ResizeGripHovered]      = ImVec4(0.13f, 0.75f, 0.75f, 0.60f);
    colors[ImGuiCol_ResizeGripActive]       = ImVec4(0.13f, 0.75f, 1.00f, 0.80f);
    colors[ImGuiCol_Tab]                    = ImVec4(0.13f, 0.75f, 0.55f, 0.80f);
    colors[ImGuiCol_TabHovered]             = ImVec4(0.13f, 0.75f, 0.75f, 0.80f);
    colors[ImGuiCol_TabActive]              = ImVec4(0.13f, 0.75f, 1.00f, 0.80f);
    colors[ImGuiCol_TabUnfocused]           = ImVec4(0.18f, 0.18f, 0.18f, 1.00f);
    colors[ImGuiCol_TabUnfocusedActive]     = ImVec4(0.36f, 0.36f, 0.36f, 0.54f);
    colors[ImGuiCol_PlotLines]              = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
    colors[ImGuiCol_PlotLinesHovered]       = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
    colors[ImGuiCol_PlotHistogram]          = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
    colors[ImGuiCol_PlotHistogramHovered]   = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
    colors[ImGuiCol_TableHeaderBg]          = ImVec4(0.19f, 0.19f, 0.20f, 1.00f);
    colors[ImGuiCol_TableBorderStrong]      = ImVec4(0.31f, 0.31f, 0.35f, 1.00f);
    colors[ImGuiCol_TableBorderLight]       = ImVec4(0.23f, 0.23f, 0.25f, 1.00f);
    colors[ImGuiCol_TableRowBg]             = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_TableRowBgAlt]          = ImVec4(1.00f, 1.00f, 1.00f, 0.07f);
    colors[ImGuiCol_TextSelectedBg]         = ImVec4(0.26f, 0.59f, 0.98f, 0.35f);
    colors[ImGuiCol_DragDropTarget]         = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
    colors[ImGuiCol_NavHighlight]           = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
    colors[ImGuiCol_NavWindowingHighlight]  = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
    colors[ImGuiCol_NavWindowingDimBg]      = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
    colors[ImGuiCol_ModalWindowDimBg]       = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);
}
void SetDarkRedTheme()
{
    ImVec4* colors = ImGui::GetStyle().Colors;
    colors[ImGuiCol_Text]                   = ImVec4(0.75f, 0.75f, 0.75f, 1.00f);
    colors[ImGuiCol_TextDisabled]           = ImVec4(0.35f, 0.35f, 0.35f, 1.00f);
    colors[ImGuiCol_WindowBg]               = ImVec4(0.00f, 0.00f, 0.00f, 0.94f);
    colors[ImGuiCol_ChildBg]                = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_PopupBg]                = ImVec4(0.08f, 0.08f, 0.08f, 0.94f);
    colors[ImGuiCol_Border]                 = ImVec4(0.00f, 0.00f, 0.00f, 0.50f);
    colors[ImGuiCol_BorderShadow]           = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_FrameBg]                = ImVec4(0.00f, 0.00f, 0.00f, 0.54f);
    colors[ImGuiCol_FrameBgHovered]         = ImVec4(0.37f, 0.14f, 0.14f, 0.67f);
    colors[ImGuiCol_FrameBgActive]          = ImVec4(0.39f, 0.20f, 0.20f, 0.67f);
    colors[ImGuiCol_TitleBg]                = ImVec4(0.04f, 0.04f, 0.04f, 1.00f);
    colors[ImGuiCol_TitleBgActive]          = ImVec4(0.48f, 0.16f, 0.16f, 1.00f);
    colors[ImGuiCol_TitleBgCollapsed]       = ImVec4(0.48f, 0.16f, 0.16f, 1.00f);
    colors[ImGuiCol_MenuBarBg]              = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
    colors[ImGuiCol_ScrollbarBg]            = ImVec4(0.02f, 0.02f, 0.02f, 0.53f);
    colors[ImGuiCol_ScrollbarGrab]          = ImVec4(0.31f, 0.31f, 0.31f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabHovered]   = ImVec4(0.41f, 0.41f, 0.41f, 1.00f);
    colors[ImGuiCol_ScrollbarGrabActive]    = ImVec4(0.51f, 0.51f, 0.51f, 1.00f);
    colors[ImGuiCol_CheckMark]              = ImVec4(0.56f, 0.10f, 0.10f, 1.00f);
    colors[ImGuiCol_SliderGrab]             = ImVec4(1.00f, 0.19f, 0.19f, 0.40f);
    colors[ImGuiCol_SliderGrabActive]       = ImVec4(0.89f, 0.00f, 0.19f, 1.00f);
    colors[ImGuiCol_Button]                 = ImVec4(1.00f, 0.19f, 0.19f, 0.40f);
    colors[ImGuiCol_ButtonHovered]          = ImVec4(0.80f, 0.17f, 0.00f, 1.00f);
    colors[ImGuiCol_ButtonActive]           = ImVec4(0.89f, 0.00f, 0.19f, 1.00f);
    colors[ImGuiCol_Header]                 = ImVec4(0.33f, 0.35f, 0.36f, 0.53f);
    colors[ImGuiCol_HeaderHovered]          = ImVec4(0.76f, 0.28f, 0.44f, 0.67f);
    colors[ImGuiCol_HeaderActive]           = ImVec4(0.47f, 0.47f, 0.47f, 0.67f);
    colors[ImGuiCol_Separator]              = ImVec4(0.32f, 0.32f, 0.32f, 1.00f);
    colors[ImGuiCol_SeparatorHovered]       = ImVec4(0.32f, 0.32f, 0.32f, 1.00f);
    colors[ImGuiCol_SeparatorActive]        = ImVec4(0.32f, 0.32f, 0.32f, 1.00f);
    colors[ImGuiCol_ResizeGrip]             = ImVec4(1.00f, 1.00f, 1.00f, 0.85f);
    colors[ImGuiCol_ResizeGripHovered]      = ImVec4(1.00f, 1.00f, 1.00f, 0.60f);
    colors[ImGuiCol_ResizeGripActive]       = ImVec4(1.00f, 1.00f, 1.00f, 0.90f);
    colors[ImGuiCol_Tab]                    = ImVec4(0.07f, 0.07f, 0.07f, 0.51f);
    colors[ImGuiCol_TabHovered]             = ImVec4(0.86f, 0.23f, 0.43f, 0.67f);
    colors[ImGuiCol_TabActive]              = ImVec4(0.19f, 0.19f, 0.19f, 0.57f);
    colors[ImGuiCol_TabUnfocused]           = ImVec4(0.05f, 0.05f, 0.05f, 0.90f);
    colors[ImGuiCol_TabUnfocusedActive]     = ImVec4(0.13f, 0.13f, 0.13f, 0.74f);
    colors[ImGuiCol_PlotLines]              = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
    colors[ImGuiCol_PlotLinesHovered]       = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
    colors[ImGuiCol_PlotHistogram]          = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
    colors[ImGuiCol_PlotHistogramHovered]   = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
    colors[ImGuiCol_TableHeaderBg]          = ImVec4(0.19f, 0.19f, 0.20f, 1.00f);
    colors[ImGuiCol_TableBorderStrong]      = ImVec4(0.31f, 0.31f, 0.35f, 1.00f);
    colors[ImGuiCol_TableBorderLight]       = ImVec4(0.23f, 0.23f, 0.25f, 1.00f);
    colors[ImGuiCol_TableRowBg]             = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
    colors[ImGuiCol_TableRowBgAlt]          = ImVec4(1.00f, 1.00f, 1.00f, 0.07f);
    colors[ImGuiCol_TextSelectedBg]         = ImVec4(0.26f, 0.59f, 0.98f, 0.35f);
    colors[ImGuiCol_DragDropTarget]         = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
    colors[ImGuiCol_NavHighlight]           = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
    colors[ImGuiCol_NavWindowingHighlight]  = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
    colors[ImGuiCol_NavWindowingDimBg]      = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
    colors[ImGuiCol_ModalWindowDimBg]       = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);
}
bool boels;
bool bil2;
int csel = 1;
bool openeds = true;
float scale = 1;
int size = 50;
void styles() {
    ImGuiStyle* style = &ImGui::GetStyle();
    ImVec4* colors = style->Colors;

    colors[ImGuiCol_Text]                   = ImVec4(0.92f, 0.92f, 0.92f, 1.00f);
    colors[ImGuiCol_TextDisabled]           = ImVec4(0.44f, 0.44f, 0.44f, 1.00f);
    colors[ImGuiCol_WindowBg]               = ImVec4(0, 0, 0, 0);
    colors[ImGuiCol_ChildBg]                = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
    colors[ImGuiCol_PopupBg]                = ImVec4(0.08f, 0.08f, 0.08f, 0.94f);
    colors[ImGuiCol_Border]                 = ImVec4(0, 0, 0, 0);
    colors[ImGuiCol_BorderShadow]           = ImVec4(0, 0, 0, 0);
    colors[ImGuiCol_FrameBg]                = ImVec4(0, 0, 0, 0);
    colors[ImGuiCol_FrameBgHovered]         = ImVec4(0, 0, 0, 0);
    colors[ImGuiCol_FrameBgActive]          = ImVec4(0, 0, 0, 0);
    colors[ImGuiCol_TitleBg]                = ImVec4(0, 0, 0, 0);
    colors[ImGuiCol_TitleBgActive]          = ImVec4(0, 0, 0, 0);
    colors[ImGuiCol_TitleBgCollapsed]       = ImVec4(0, 0, 0, 0);
    colors[ImGuiCol_MenuBarBg]              = ImVec4(0.11f, 0.11f, 0.11f, 1.00f);
    colors[ImGuiCol_ScrollbarBg]            =  ImColor(255,255,255,0);
    colors[ImGuiCol_ScrollbarGrab]          = ImColor(255,255,255,0);
    colors[ImGuiCol_ScrollbarGrabHovered]   = ImColor(255,255,255,0);
    colors[ImGuiCol_ScrollbarGrabActive]    = ImColor(255,255,255,0);
    colors[ImGuiCol_CheckMark]              = ImVec4(0.78f, 0.55f, 0.21f, 1.00f);
    colors[ImGuiCol_SliderGrab]             = ImVec4(0.91f, 0.64f, 0.13f, 1.00f);
    colors[ImGuiCol_SliderGrabActive]       = ImVec4(0.91f, 0.64f, 0.13f, 1.00f);
    colors[ImGuiCol_Button]                 = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
    colors[ImGuiCol_ButtonHovered]          = ImVec4(0.4f, 0.4f, 0.4f, 1.00f);
    colors[ImGuiCol_ButtonActive]           = ImVec4(0.4f, 0.4f, 0.4f, 1.00f);
    colors[ImGuiCol_Header]                 = ImVec4(0, 0, 0, 0);
    colors[ImGuiCol_HeaderHovered]          = ImVec4(0, 0, 0, 0);
    colors[ImGuiCol_HeaderActive]           = ImVec4(0, 0, 0, 0);
    colors[ImGuiCol_Separator]              = ImVec4(0.21f, 0.21f, 0.21f, 1.00f);
    colors[ImGuiCol_SeparatorHovered]       = ImVec4(0.91f, 0.64f, 0.13f, 1.00f);
    colors[ImGuiCol_SeparatorActive]        = ImVec4(0.78f, 0.55f, 0.21f, 1.00f);
    colors[ImGuiCol_ResizeGrip]             = ImVec4(0.21f, 0.21f, 0.21f, 1.00f);
    colors[ImGuiCol_ResizeGripHovered]      = ImVec4(0.91f, 0.64f, 0.13f, 1.00f);
    colors[ImGuiCol_ResizeGripActive]       = ImVec4(0.78f, 0.55f, 0.21f, 1.00f);
    colors[ImGuiCol_Tab]                    = ImVec4(0.51f, 0.36f, 0.15f, 1.00f);
    colors[ImGuiCol_TabHovered]             = ImVec4(0.91f, 0.64f, 0.13f, 1.00f);
    colors[ImGuiCol_TabActive]              = ImVec4(0.78f, 0.55f, 0.21f, 1.00f);
    colors[ImGuiCol_TabUnfocused]           = ImVec4(0.07f, 0.10f, 0.15f, 0.97f);
    colors[ImGuiCol_TabUnfocusedActive]     = ImVec4(0.14f, 0.26f, 0.42f, 1.00f);
    colors[ImGuiCol_PlotLines]              = ImVec4(0.61f, 0.61f, 0.61f, 1.00f);
    colors[ImGuiCol_PlotLinesHovered]       = ImVec4(1.00f, 0.43f, 0.35f, 1.00f);
    colors[ImGuiCol_PlotHistogram]          = ImVec4(0.90f, 0.70f, 0.00f, 1.00f);
    colors[ImGuiCol_PlotHistogramHovered]   = ImVec4(1.00f, 0.60f, 0.00f, 1.00f);
    colors[ImGuiCol_TextSelectedBg]         = ImVec4(0.26f, 0.59f, 0.98f, 0.35f);

    colors[ImGuiCol_DragDropTarget]         = ImVec4(1.00f, 1.00f, 0.00f, 0.90f);
    colors[ImGuiCol_NavHighlight]           = ImVec4(0.26f, 0.59f, 0.98f, 1.00f);
    colors[ImGuiCol_NavWindowingHighlight]  = ImVec4(1.00f, 1.00f, 1.00f, 0.70f);
    colors[ImGuiCol_NavWindowingDimBg]      = ImVec4(0.80f, 0.80f, 0.80f, 0.20f);
    colors[ImGuiCol_ModalWindowDimBg]       = ImVec4(0.80f, 0.80f, 0.80f, 0.35f);

    style->FramePadding = ImVec2(5, 5);
    style->ItemSpacing = ImVec2(0, 0);
    style->IndentSpacing = 0;
    style->ScrollbarSize = 10 * scale;
    style->ItemInnerSpacing = ImVec2(7, 7);
    style->WindowRounding = 0;
    style->FrameRounding = 0;
    style->PopupRounding = 0;
    style->ScrollbarRounding = 6;
    style->GrabRounding = 4;
    style->TabRounding = 4;

    style->WindowTitleAlign = ImVec2(0, 0);
    style->DisplaySafeAreaPadding = ImVec2(0, 0);

    ImGui::GetStyle().WindowRounding = 0;
    ImGui::GetStyle().Alpha = 255;
    ImGui::GetStyle().WindowPadding = ImVec2(0,0);

    ImGui::GetStyle().Colors[ImGuiCol_FrameBg] = ImVec4(0, 0, 0, 0);
    ImGui::GetStyle().Colors[ImGuiCol_FrameBgActive] = ImVec4(0, 0, 0, 0);
    ImGui::GetStyle().Colors[ImGuiCol_FrameBgHovered] = ImVec4(0, 0, 0, 0);
}
float RadiusCircle = 1.5;
float YCircle = 0;
#include "autofunc.h"
void featurese(int sel, int ch) {
    if (sel == 1) {
        if (ch == 1) {
            ImGui::Checkbox(S("esp"), &ESP);
            ImGui::SliderInt(S("distance ##sesp"), &espdistance, 0, 360);
            ImGui::Separator();
            ImGui::Spacing();
            if (ImGui::CollapsingHeader(S(ICON_FA_CUBE " esp line"))) {
                ImGui::Separator();
                ImGui::Spacing();
                ImGui::Checkbox(S("line ##Line"), &ESPLine);
                ImGui::Spacing();
                ImGui::SliderInt(S("type ##Line"), &visual_esp_line_type, 0, 2);
                ImGui::SliderFloat(S("size ##Line"), &visual_esp_line, 0.5f, 10);
                if (ImGui::ColorEdit3(S("color ##Line"), (float *) &Esp_Line)) {
                }
                ImGui::Separator();
            }
            if (ImGui::CollapsingHeader(S(ICON_FA_CUBE " esp box"))) {
                ImGui::Separator();
                ImGui::Spacing();
                ImGui::Checkbox(S("box ##box"), &ESPBox);
                ImGui::Spacing();
                ImGui::SliderFloat(S("size ##Box"), &visual_esp_boxth, 0.5f, 10);
                ImGui::SliderFloat(S("corner ##box"), &visual_esp_box, 0, 10);
                if (ImGui::ColorEdit3(S("color ##box"), (float *) &Esp_Box)) {
                }
                ImGui::Separator();
            }
            if (ImGui::CollapsingHeader(S(ICON_FA_CUBE " esp box2"))) {
                ImGui::Separator();
                ImGui::Spacing();
                ImGui::Checkbox(S("box ##boxf"), &ESPGradientBox);
                ImGui::Spacing();
                ImGui::SliderFloat(S("corner ##Boxf"), &visual_esp_box_filedth, 0.5f, 10);
                if (ImGui::ColorEdit4(S("color ##boxf"), (float *) &Esp_Filed)) {
                }
                ImGui::Separator();
            }
            if (ImGui::CollapsingHeader(S(ICON_FA_CUBE " esp health"))) {
                ImGui::Separator();
                ImGui::Spacing();
                ImGui::Checkbox(S("health ##esphe"), &ESPHealth);
                ImGui::Spacing();
                ImGui::SliderFloat(S("corner  ##esphe"), &visual_esp_box_filed, 0.5f, 10);
                if (ImGui::ColorEdit3(S("color  ##esphe"), (float *) &Esp_He)) {
                }
                ImGui::Separator();
            }

            if (ImGui::CollapsingHeader(S(ICON_FA_CUBE " esp name"))) {
                ImGui::Separator();
                ImGui::Spacing();
                ImGui::Checkbox(S("name ##ename"), &ESPNick);
                ImGui::Checkbox(S("circle ##ename"), &ESP360);
                ImGui::Spacing();
                if (ImGui::ColorEdit3(S("color ##ename"), (float *) &Esp_Text)) {
                }
                ImGui::Separator();
            }
        }
        if (ch == 2) {
            if (ImGui::CollapsingHeader(S(ICON_FA_CUBE " chams category"))) {
                ImGui::Separator();
                ImGui::Spacing();
                if (ImGui::CollapsingHeader(S(ICON_FA_CUBE " textured ##chams"))) {
                    ImGui::Separator();
                    ImGui::Spacing();
                    ImGui::Checkbox(S("enable ##textured"), &enableWallhack);
                    ImGui::Spacing();
                    ImGui::SliderFloat(S("red ##textured"), &r, 0, 255);
                    ImGui::SliderFloat(S("green ##textured"), &g, 0, 255);
                    ImGui::SliderFloat(S("blue ##textured"), &b, 0, 255);
                    ImGui::Separator();
                }
                if (ImGui::CollapsingHeader(S(ICON_FA_BOX " shading ##chams"))) {
                    ImGui::Separator();
                    ImGui::Spacing();
                    ImGui::Checkbox(S("enable ##shading"), &enableWallhackS);
                    ImGui::Spacing();
                    ImGui::SliderFloat(S("red ##sh"), &rs, 0, 255);
                    ImGui::SliderFloat(S("green ##sh"), &gs, 0, 255);
                    ImGui::SliderFloat(S("blue ##sh"), &bs, 0, 255);
                    ImGui::Separator();
                }
                if (ImGui::CollapsingHeader(S(ICON_FA_LINES_LEANING " wireframe ##chams"))) {
                    ImGui::Separator();
                    ImGui::Spacing();
                    ImGui::Checkbox(S("enable ##wire"), &enableWallhackW);
                    ImGui::SliderInt(S("line ##wire"), &w, 0, 5);
                    ImGui::Spacing();
                    ImGui::SliderFloat(S("red ##wire"), &rw, 0, 255);
                    ImGui::SliderFloat(S("green ##wire"), &gw, 0, 255);
                    ImGui::SliderFloat(S("blue ##wire"), &bw, 0, 255);
                    ImGui::Separator();
                }
                if (ImGui::CollapsingHeader(S(ICON_FA_CUBES_STACKED " glow ##chams"))) {
                    ImGui::Separator();
                    ImGui::Spacing();
                    ImGui::Checkbox(S("enable ##glow"), &enableWallhackG);
                    ImGui::SliderFloat(S("line ##glow"), &gwidtch, 0, 5);
                    ImGui::Spacing();
                    ImGui::SliderFloat(S("red ##glow"), &rg, 0, 255);
                    ImGui::SliderFloat(S("green ##glow"), &gg, 0, 255);
                    ImGui::SliderFloat(S("blue ##glow"), &bg, 0, 255);
                    ImGui::Separator();
                }
                if (ImGui::CollapsingHeader(S(ICON_FA_MICROPHONE_LINES " outline ##chams"))) {
                    ImGui::Separator();
                    ImGui::Spacing();
                    ImGui::Checkbox(S("enable ##out"), &enableWallhackO);
                    ImGui::SliderFloat(S("line ##out"), &ow, 0, 10);
                    ImGui::Spacing();
                    ImGui::SliderFloat(S("red ##out"), &ro, 0, 255);
                    ImGui::SliderFloat(S("green ##out"), &go, 0, 255);
                    ImGui::SliderFloat(S("blue ##out"), &bo, 0, 255);
                    ImGui::Separator();
                }
            }
            if (ImGui::CollapsingHeader(S(ICON_FA_CUBE " hands position"))) {
                ImGui::Separator();
                ImGui::Spacing();
                ImGui::Checkbox(S("position ##pos"), &handspos);
                ImGui::Spacing();
                ImGui::SliderInt(S("X ##pos"), &handsX, -350 * 0.3f, 350 * 0.3f);
                ImGui::SliderInt(S("Y ##pos"), &handsY, -350 * 0.3f, 350 * 0.3f);
                ImGui::SliderInt(S("Z ##pos"), &handsZ, -350 * 0.3f, 350 * 0.3f);
                ImGui::Separator();
            }
            if (ImGui::CollapsingHeader(S(ICON_FA_CROSSHAIRS " crosshair"))) {
                ImGui::Separator();
                ImGui::Spacing();
                ImGui::Checkbox(S("circle ##cross"), &visuals[1]);
                ImGui::Spacing();
                ImGui::SliderFloat(S("size ##circle"), &visual_circle_size, 0.1f, 300);
                ImGui::SliderFloat(S("stroke ##strokes"), &visual_circle_stroke, 1, 15);
                if (ImGui::ColorEdit3(S("color ##ccolor"), (float *) &Cross_Circle)) {
                }
                ImGui::Separator();
                ImGui::Checkbox(S("lined ##cross"), &visuals[2]);
                ImGui::Spacing();
                ImGui::SliderFloat(S("size ##lsize"), &visual_lined_size, 0.1f, 300);
                ImGui::SliderFloat(S("stroke ##lstroke"), &visual_lined_stroke, 0.1f, 300);
                if (ImGui::ColorEdit3(S("color ##lcolor"), (float *) &Cross_Lined)) {
                }
                ImGui::Separator();
            }
        }
    }
    if (sel == 2) {
        if (ch == 1) {
            ImGui::Checkbox(S("silent ##aim"), &silentaim);
            ImGui::Spacing();
            ImGui::SliderInt(S("head ##silent"), &HeadPercent, 0, 100);
            ImGui::SliderInt(S("neck ##silent"), &NeckPercent, 0, 100);
            ImGui::SliderInt(S("body ##silent"), &BodyPercent, 0, 100);
            ImGui::Spacing();
            ImGui::SliderInt(S("fov ##silent"), &silentfov, 0, 360);
            ImGui::Checkbox(S("draw ##silent"), &visuals[33]);
          // ImGui::SliderInt(S("dist ##sdists"), &silentDistance, 0, 360);
            ImGui::Checkbox(S("draw ##silents"), &visuals[44]);
            if (ImGui::ColorEdit3(S("color ##silentdist"), (float *) &Silent_Distance)) {
            }
            ImGui::Separator();
        }
        if (ch == 2) {
            ImGui::Checkbox(S("spin ##bot"), &spinbot);
            ImGui::Spacing();
            ImGui::SliderInt(S("speed ##bot"), &speedSpin, 0, 360);
            ImGui::SliderInt(S("down ##bot"), &downSpin, 0, 360);
            ImGui::Checkbox(S("godmode ##bot"), &godmode);

			if(ImGui::CollapsingHeader(S(" RecoilControlSystem ##func"))) {
				ImGui::Checkbox(S("RCS ON ##RecoilControlSystem"), &RCS);
				ImGui::SliderFloat(S("X VALUE ##RecoilControlSystem"), &xValue, 0.1f, 100);
				ImGui::SliderFloat(S("Y VALUE##RecoilControlSystem"), &yValue, 0.1f, 100);
			}
        }
    }
    if (sel == 3) {
        if (ch == 1) {
			if(ImGui::CollapsingHeader(S(" SkinChanger ##func"))) {
                      ImGui::Text(S("knifes"));
					  ImGui::Checkbox(S("m9 Dragon Glass ##SkinChanger"), &m9229);
					  ImGui::Checkbox(S("Karambit ##SkinChanger"), &kera);
					  ImGui::Checkbox(S("Butterfly ##SkinChanger"), &babochka);
					  ImGui::Checkbox(S("Jikommando ##SkinChanger"), &jk);
					  ImGui::Checkbox(S("Dual Daggers ##SkinChanger"), &dg);
					  ImGui::Text(S("Weapons"));
					  ImGui::Checkbox(S("akr treasure hunter ##SkinChanger"), &akr123);
					  ImGui::Checkbox(S("akr12 RailGun ##SkinChanger"), &akr228);
					  ImGui::Checkbox(S("m4 Samurai ##SkinChanger"), &m4sam);
					  ImGui::Checkbox(S("m16 Winget ##SkinChanger"), &m16winget);
					  ImGui::Checkbox(S("Awm Boom ##SkinChanger"), &awmb);
					  ImGui::Checkbox(S("Awm v2 ##SkinChanger"), &awm2);
					  ImGui::Checkbox(S("Awm Genesis ##SkinChanger"), &awmg);
					  ImGui::Checkbox(S("Usp ##SkinChanger"), &usp);
					  ImGui::Checkbox(S("Deagle Yakuza ##SkinChanger"), &yakuza);
					  ImGui::Checkbox(S("g22 Nest ##SkinChanger"), &g22n);
					  ImGui::Checkbox(S("P350 Forest Spirit ##SkinChanger"), &p350f);
					  ImGui::Checkbox(S("Tec9 New ##SkinChanger"), &tec9);
					  ImGui::Checkbox(S("Five Seven Venom ##SkinChanger"), &fsven);
			}
        }
        if (ch == 2) {
			if(ImGui::CollapsingHeader(S(" StickerChanger ##func"))) {
				ImGui::Checkbox(S("On ##StickerChanger"), &stickercall);
				ImGui::Checkbox(S("akr ##StickerChanger"), &akrs);
				ImGui::Checkbox(S("akr12 ##StickerChanger"), &akr12s);
				ImGui::Checkbox(S("m4 ##StickerChanger"), &m4s);
				ImGui::Checkbox(S("m16 ##StickerChanger"), &m16s);
				ImGui::Checkbox(S("awm ##StickerChanger"), &awms);
				if(akrs){
				ImGui::SliderInt(S("Slot Akr ##StickerChanger"), &positionslot1, 0, 4);
                if(positionslot1 == 1){
					ImGui::Checkbox(S("Gold Skull ##StickerChanger"), &goldSkullzAkr1);
					ImGui::Checkbox(S("AntiKemper ##StickerChanger"), &AntiKemperAkr1);
					ImGui::Checkbox(S("HurryGhost ##StickerChanger"), &HurryGhostAkr1);
					ImGui::Checkbox(S("Feed ##StickerChanger"), &FeedAkr1);
					ImGui::Checkbox(S("z9Musk ##StickerChanger"), &z9MuskAkr1);
					ImGui::Checkbox(S("Samurai ##StickerChanger"), &SamuraiAkr1);
					ImGui::Checkbox(S("Dragon ##StickerChanger"), &DragonAkr1);
					ImGui::Checkbox(S("NiceSkillColor ##StickerChanger"), &NiceSkillColorAkr1);
					ImGui::Checkbox(S("BigBoy ##StickerChanger"), &NiceSkillColorAkr1);
				}
				if(positionslot1 == 2){
					ImGui::Checkbox(S("Gold Skull ##StickerChanger"), &goldSkullzAkr2);
					ImGui::Checkbox(S("AntiKemper ##StickerChanger"), &AntiKemperAkr2);
					ImGui::Checkbox(S("HurryGhost ##StickerChanger"), &HurryGhostAkr2);
					ImGui::Checkbox(S("Feed ##StickerChanger"), &FeedAkr2);
					ImGui::Checkbox(S("z9Musk ##StickerChanger"), &z9MuskAkr2);
					ImGui::Checkbox(S("Samurai ##StickerChanger"), &SamuraiAkr2);
					ImGui::Checkbox(S("Dragon ##StickerChanger"), &DragonAkr2);
					ImGui::Checkbox(S("NiceSkillColor ##StickerChanger"), &NiceSkillColorAkr2);
					ImGui::Checkbox(S("BigBoy ##StickerChanger"), &NiceSkillColorAkr2);
				}
				if(positionslot1 == 3){
					ImGui::Checkbox(S("Gold Skull ##StickerChanger"), &goldSkullzAkr3);
					ImGui::Checkbox(S("AntiKemper ##StickerChanger"), &AntiKemperAkr3);
					ImGui::Checkbox(S("HurryGhost ##StickerChanger"), &HurryGhostAkr3);
					ImGui::Checkbox(S("Feed ##StickerChanger"), &FeedAkr3);
					ImGui::Checkbox(S("z9Musk ##StickerChanger"), &z9MuskAkr3);
					ImGui::Checkbox(S("Samurai ##StickerChanger"), &SamuraiAkr3);
					ImGui::Checkbox(S("Dragon ##StickerChanger"), &DragonAkr3);
					ImGui::Checkbox(S("NiceSkillColor ##StickerChanger"), &NiceSkillColorAkr3);
					ImGui::Checkbox(S("BigBoy ##StickerChanger"), &NiceSkillColorAkr3);
				}
				if(positionslot1 == 4){
					ImGui::Checkbox(S("Gold Skull ##StickerChanger"), &goldSkullzAkr4);
					ImGui::Checkbox(S("AntiKemper ##StickerChanger"), &AntiKemperAkr4);
					ImGui::Checkbox(S("HurryGhost ##StickerChanger"), &HurryGhostAkr4);
					ImGui::Checkbox(S("Feed ##StickerChanger"), &FeedAkr4);
					ImGui::Checkbox(S("z9Musk ##StickerChanger"), &z9MuskAkr4);
					ImGui::Checkbox(S("Samurai ##StickerChanger"), &SamuraiAkr4);
					ImGui::Checkbox(S("Dragon ##StickerChanger"), &DragonAkr4);
					ImGui::Checkbox(S("NiceSkillColor ##StickerChanger"), &NiceSkillColorAkr4);
					ImGui::Checkbox(S("BigBoy ##StickerChanger"), &NiceSkillColorAkr4);
				}
				} else if(akr12s){
				ImGui::SliderInt(S("Slot Akr12 ##StickerChanger"), &positionslot2, 0, 4);
                if(positionslot2 == 1){
					ImGui::Checkbox(S("Gold Skull ##StickerChanger"), &goldSkullzakr121);
					ImGui::Checkbox(S("AntiKemper ##StickerChanger"), &AntiKemperakr121);
					ImGui::Checkbox(S("HurryGhost ##StickerChanger"), &HurryGhostakr121);
					ImGui::Checkbox(S("Feed ##StickerChanger"), &Feedakr121);
					ImGui::Checkbox(S("z9Musk ##StickerChanger"), &z9Muskakr121);
					ImGui::Checkbox(S("Samurai ##StickerChanger"), &Samuraiakr121);
					ImGui::Checkbox(S("Dragon ##StickerChanger"), &Dragonakr121);
					ImGui::Checkbox(S("NiceSkillColor ##StickerChanger"), &NiceSkillColorakr121);
					ImGui::Checkbox(S("BigBoy ##StickerChanger"), &NiceSkillColorakr121);
				}
				if(positionslot2 == 2){
					ImGui::Checkbox(S("Gold Skull ##StickerChanger"), &goldSkullzakr122);
					ImGui::Checkbox(S("AntiKemper ##StickerChanger"), &AntiKemperakr122);
					ImGui::Checkbox(S("HurryGhost ##StickerChanger"), &HurryGhostakr122);
					ImGui::Checkbox(S("Feed ##StickerChanger"), &Feedakr122);
					ImGui::Checkbox(S("z9Musk ##StickerChanger"), &z9Muskakr122);
					ImGui::Checkbox(S("Samurai ##StickerChanger"), &Samuraiakr122);
					ImGui::Checkbox(S("Dragon ##StickerChanger"), &Dragonakr122);
					ImGui::Checkbox(S("NiceSkillColor ##StickerChanger"), &NiceSkillColorakr122);
					ImGui::Checkbox(S("BigBoy ##StickerChanger"), &NiceSkillColorakr122);
				}
				if(positionslot2 == 3){
					ImGui::Checkbox(S("Gold Skull ##StickerChanger"), &goldSkullzakr123);
					ImGui::Checkbox(S("AntiKemper ##StickerChanger"), &AntiKemperakr123);
					ImGui::Checkbox(S("HurryGhost ##StickerChanger"), &HurryGhostakr123);
					ImGui::Checkbox(S("Feed ##StickerChanger"), &Feedakr123);
					ImGui::Checkbox(S("z9Musk ##StickerChanger"), &z9Muskakr123);
					ImGui::Checkbox(S("Samurai ##StickerChanger"), &Samuraiakr123);
					ImGui::Checkbox(S("Dragon ##StickerChanger"), &Dragonakr123);
					ImGui::Checkbox(S("NiceSkillColor ##StickerChanger"), &NiceSkillColorakr123);
					ImGui::Checkbox(S("BigBoy ##StickerChanger"), &NiceSkillColorakr123);
				}
				if(positionslot2 == 4){
					ImGui::Checkbox(S("Gold Skull ##StickerChanger"), &goldSkullzakr124);
					ImGui::Checkbox(S("AntiKemper ##StickerChanger"), &AntiKemperakr124);
					ImGui::Checkbox(S("HurryGhost ##StickerChanger"), &HurryGhostakr124);
					ImGui::Checkbox(S("Feed ##StickerChanger"), &Feedakr124);
					ImGui::Checkbox(S("z9Musk ##StickerChanger"), &z9Muskakr124);
					ImGui::Checkbox(S("Samurai ##StickerChanger"), &Samuraiakr124);
					ImGui::Checkbox(S("Dragon ##StickerChanger"), &Dragonakr124);
					ImGui::Checkbox(S("NiceSkillColor ##StickerChanger"), &NiceSkillColorakr124);
					ImGui::Checkbox(S("BigBoy ##StickerChanger"), &NiceSkillColorakr124);
				}
				} else if(m4s){
				ImGui::SliderInt(S("Slot m4 ##StickerChanger"), &positionslot3, 0, 4);
                if(positionslot3 == 1){
					ImGui::Checkbox(S("Gold Skull ##StickerChanger"), &goldSkullzm41);
					ImGui::Checkbox(S("AntiKemper ##StickerChanger"), &AntiKemperm41);
					ImGui::Checkbox(S("HurryGhost ##StickerChanger"), &HurryGhostm41);
					ImGui::Checkbox(S("Feed ##StickerChanger"), &Feedm41);
					ImGui::Checkbox(S("z9Musk ##StickerChanger"), &z9Muskm41);
					ImGui::Checkbox(S("Samurai ##StickerChanger"), &Samuraim41);
					ImGui::Checkbox(S("Dragon ##StickerChanger"), &Dragonm41);
					ImGui::Checkbox(S("NiceSkillColor ##StickerChanger"), &NiceSkillColorm41);
					ImGui::Checkbox(S("BigBoy ##StickerChanger"), &NiceSkillColorm41);
				}
				if(positionslot3 == 2){
					ImGui::Checkbox(S("Gold Skull ##StickerChanger"), &goldSkullzm42);
					ImGui::Checkbox(S("AntiKemper ##StickerChanger"), &AntiKemperm42);
					ImGui::Checkbox(S("HurryGhost ##StickerChanger"), &HurryGhostm42);
					ImGui::Checkbox(S("Feed ##StickerChanger"), &Feedm42);
					ImGui::Checkbox(S("z9Musk ##StickerChanger"), &z9Muskm42);
					ImGui::Checkbox(S("Samurai ##StickerChanger"), &Samuraim42);
					ImGui::Checkbox(S("Dragon ##StickerChanger"), &Dragonm42);
					ImGui::Checkbox(S("NiceSkillColor ##StickerChanger"), &NiceSkillColorm42);
					ImGui::Checkbox(S("BigBoy ##StickerChanger"), &NiceSkillColorm42);
				}
				if(positionslot3 == 3){
					ImGui::Checkbox(S("Gold Skull ##StickerChanger"), &goldSkullzm43);
					ImGui::Checkbox(S("AntiKemper ##StickerChanger"), &AntiKemperm43);
					ImGui::Checkbox(S("HurryGhost ##StickerChanger"), &HurryGhostm43);
					ImGui::Checkbox(S("Feed ##StickerChanger"), &Feedm43);
					ImGui::Checkbox(S("z9Musk ##StickerChanger"), &z9Muskm43);
					ImGui::Checkbox(S("Samurai ##StickerChanger"), &Samuraim43);
					ImGui::Checkbox(S("Dragon ##StickerChanger"), &Dragonm43);
					ImGui::Checkbox(S("NiceSkillColor ##StickerChanger"), &NiceSkillColorm43);
					ImGui::Checkbox(S("BigBoy ##StickerChanger"), &NiceSkillColorm43);
				}
				if(positionslot3 == 4){
					ImGui::Checkbox(S("Gold Skull ##StickerChanger"), &goldSkullzm44);
					ImGui::Checkbox(S("AntiKemper ##StickerChanger"), &AntiKemperm44);
					ImGui::Checkbox(S("HurryGhost ##StickerChanger"), &HurryGhostm44);
					ImGui::Checkbox(S("Feed ##StickerChanger"), &Feedm44);
					ImGui::Checkbox(S("z9Musk ##StickerChanger"), &z9Muskm44);
					ImGui::Checkbox(S("Samurai ##StickerChanger"), &Samuraim44);
					ImGui::Checkbox(S("Dragon ##StickerChanger"), &Dragonm44);
					ImGui::Checkbox(S("NiceSkillColor ##StickerChanger"), &NiceSkillColorm44);
					ImGui::Checkbox(S("BigBoy ##StickerChanger"), &NiceSkillColorm44);
				}
				} else if(m16s){
				ImGui::SliderInt(S("Slot m16 ##StickerChanger"), &positionslot4, 0, 4);
                if(positionslot4 == 1){
					ImGui::Checkbox(S("Gold Skull ##StickerChanger"), &goldSkullzm161);
					ImGui::Checkbox(S("AntiKemper ##StickerChanger"), &AntiKemperm161);
					ImGui::Checkbox(S("HurryGhost ##StickerChanger"), &HurryGhostm161);
					ImGui::Checkbox(S("Feed ##StickerChanger"), &Feedm161);
					ImGui::Checkbox(S("z9Musk ##StickerChanger"), &z9Muskm161);
					ImGui::Checkbox(S("Samurai ##StickerChanger"), &Samuraim161);
					ImGui::Checkbox(S("Dragon ##StickerChanger"), &Dragonm161);
					ImGui::Checkbox(S("NiceSkillColor ##StickerChanger"), &NiceSkillColorm161);
					ImGui::Checkbox(S("BigBoy ##StickerChanger"), &NiceSkillColorm161);
				}
				if(positionslot4 == 2){
					ImGui::Checkbox(S("Gold Skull ##StickerChanger"), &goldSkullzm162);
					ImGui::Checkbox(S("AntiKemper ##StickerChanger"), &AntiKemperm162);
					ImGui::Checkbox(S("HurryGhost ##StickerChanger"), &HurryGhostm162);
					ImGui::Checkbox(S("Feed ##StickerChanger"), &Feedm162);
					ImGui::Checkbox(S("z9Musk ##StickerChanger"), &z9Muskm162);
					ImGui::Checkbox(S("Samurai ##StickerChanger"), &Samuraim162);
					ImGui::Checkbox(S("Dragon ##StickerChanger"), &Dragonm162);
					ImGui::Checkbox(S("NiceSkillColor ##StickerChanger"), &NiceSkillColorm162);
					ImGui::Checkbox(S("BigBoy ##StickerChanger"), &NiceSkillColorm162);
				}
				if(positionslot4 == 3){
					ImGui::Checkbox(S("Gold Skull ##StickerChanger"), &goldSkullzm163);
					ImGui::Checkbox(S("AntiKemper ##StickerChanger"), &AntiKemperm163);
					ImGui::Checkbox(S("HurryGhost ##StickerChanger"), &HurryGhostm163);
					ImGui::Checkbox(S("Feed ##StickerChanger"), &Feedm163);
					ImGui::Checkbox(S("z9Musk ##StickerChanger"), &z9Muskm163);
					ImGui::Checkbox(S("Samurai ##StickerChanger"), &Samuraim163);
					ImGui::Checkbox(S("Dragon ##StickerChanger"), &Dragonm163);
					ImGui::Checkbox(S("NiceSkillColor ##StickerChanger"), &NiceSkillColorm163);
					ImGui::Checkbox(S("BigBoy ##StickerChanger"), &NiceSkillColorm163);
				}
				if(positionslot4 == 4){
					ImGui::Checkbox(S("Gold Skull ##StickerChanger"), &goldSkullzm164);
					ImGui::Checkbox(S("AntiKemper ##StickerChanger"), &AntiKemperm164);
					ImGui::Checkbox(S("HurryGhost ##StickerChanger"), &HurryGhostm164);
					ImGui::Checkbox(S("Feed ##StickerChanger"), &Feedm164);
					ImGui::Checkbox(S("z9Musk ##StickerChanger"), &z9Muskm164);
					ImGui::Checkbox(S("Samurai ##StickerChanger"), &Samuraim164);
					ImGui::Checkbox(S("Dragon ##StickerChanger"), &Dragonm164);
					ImGui::Checkbox(S("NiceSkillColor ##StickerChanger"), &NiceSkillColorm164);
					ImGui::Checkbox(S("BigBoy ##StickerChanger"), &NiceSkillColorm164);
				}
				} else if(awms){
				ImGui::SliderInt(S("Slot awm ##StickerChanger"), &positionslot5, 0, 4);
                if(positionslot5 == 1){
					ImGui::Checkbox(S("Gold Skull ##StickerChanger"), &goldSkullzawm1);
					ImGui::Checkbox(S("AntiKemper ##StickerChanger"), &AntiKemperawm1);
					ImGui::Checkbox(S("HurryGhost ##StickerChanger"), &HurryGhostawm1);
					ImGui::Checkbox(S("Feed ##StickerChanger"), &Feedawm1);
					ImGui::Checkbox(S("z9Musk ##StickerChanger"), &z9Muskawm1);
					ImGui::Checkbox(S("Samurai ##StickerChanger"), &Samuraiawm1);
					ImGui::Checkbox(S("Dragon ##StickerChanger"), &Dragonawm1);
					ImGui::Checkbox(S("NiceSkillColor ##StickerChanger"), &NiceSkillColorawm1);
					ImGui::Checkbox(S("BigBoy ##StickerChanger"), &NiceSkillColorawm1);
				}
				if(positionslot5 == 2){
					ImGui::Checkbox(S("Gold Skull ##StickerChanger"), &goldSkullzawm2);
					ImGui::Checkbox(S("AntiKemper ##StickerChanger"), &AntiKemperawm2);
					ImGui::Checkbox(S("HurryGhost ##StickerChanger"), &HurryGhostawm2);
					ImGui::Checkbox(S("Feed ##StickerChanger"), &Feedawm2);
					ImGui::Checkbox(S("z9Musk ##StickerChanger"), &z9Muskawm2);
					ImGui::Checkbox(S("Samurai ##StickerChanger"), &Samuraiawm2);
					ImGui::Checkbox(S("Dragon ##StickerChanger"), &Dragonawm2);
					ImGui::Checkbox(S("NiceSkillColor ##StickerChanger"), &NiceSkillColorawm2);
					ImGui::Checkbox(S("BigBoy ##StickerChanger"), &NiceSkillColorawm2);
				}
				if(positionslot5 == 3){
					ImGui::Checkbox(S("Gold Skull ##StickerChanger"), &goldSkullzawm3);
					ImGui::Checkbox(S("AntiKemper ##StickerChanger"), &AntiKemperawm3);
					ImGui::Checkbox(S("HurryGhost ##StickerChanger"), &HurryGhostawm3);
					ImGui::Checkbox(S("Feed ##StickerChanger"), &Feedawm3);
					ImGui::Checkbox(S("z9Musk ##StickerChanger"), &z9Muskawm3);
					ImGui::Checkbox(S("Samurai ##StickerChanger"), &Samuraiawm3);
					ImGui::Checkbox(S("Dragon ##StickerChanger"), &Dragonawm3);
					ImGui::Checkbox(S("NiceSkillColor ##StickerChanger"), &NiceSkillColorawm3);
					ImGui::Checkbox(S("BigBoy ##StickerChanger"), &NiceSkillColorawm3);
				}
				if(positionslot5 == 4){
					ImGui::Checkbox(S("Gold Skull ##StickerChanger"), &goldSkullzawm4);
					ImGui::Checkbox(S("AntiKemper ##StickerChanger"), &AntiKemperawm4);
					ImGui::Checkbox(S("HurryGhost ##StickerChanger"), &HurryGhostawm4);
					ImGui::Checkbox(S("Feed ##StickerChanger"), &Feedawm4);
					ImGui::Checkbox(S("z9Musk ##StickerChanger"), &z9Muskawm4);
					ImGui::Checkbox(S("Samurai ##StickerChanger"), &Samuraiawm4);
					ImGui::Checkbox(S("Dragon ##StickerChanger"), &Dragonawm4);
					ImGui::Checkbox(S("NiceSkillColor ##StickerChanger"), &NiceSkillColorawm4);
					ImGui::Checkbox(S("BigBoy ##StickerChanger"), &NiceSkillColorawm4);
				}
				}
			}
        }
    }
    if (sel == 4) {
        if (ch == 1) {
            if (ImGui::CollapsingHeader(S(ICON_FA_USER " player ##func"))) {
                ImGui::Checkbox(S("fly ##player"), &fly);
                ImGui::Checkbox(S("crash ##player"), &shotcrash);
				ImGui::Checkbox(S("autowin(ct) ##player"), &autowin);
                ImGui::SliderInt(S("speed ##player"), &flyspeed, 0, 50);
                ImGui::Spacing();
                ImGui::Checkbox(S("air jump"), &airjump);
                ImGui::Spacing();
                ImGui::Separator();
            }
            if (ImGui::CollapsingHeader(S(ICON_FA_GUN " weapon ##func"))) {
                ImGui::Separator();
                ImGui::Spacing();
                ImGui::Checkbox(S("Fire Rate"), &firerate);
                ImGui::Spacing();
                ImGui::Checkbox(S("Ammo Hack"), &ammo);
                ImGui::Spacing();
                ImGui::Checkbox(S("Norecoil"), &recoil);
                ImGui::Spacing();
                ImGui::Checkbox(S("WallShot"), &wallshoot);
                ImGui::Spacing();
                ImGui::Separator();
            }
        }
        if (ch == 2) {
            if (ImGui::CollapsingHeader(S(ICON_FA_TRUCK_FAST " Player ##func"))) {
                ImGui::Separator();
                ImGui::Spacing();
                ImGui::Checkbox(S("TeleKill"), &telekill);
                ImGui::Spacing();
                ImGui::Checkbox(S("MassKill"), &masskill);
                ImGui::Spacing();
                ImGui::Separator();
            }
        }
    }
    if (sel == 5) {
        if (ch == 1) {
            ImGui::Text(S("Scroll Scale"));
            if (ImGui::Button(S("size 1 ##menu"))){
                scale = 1;
            }
            ImGui::SameLine();
            if (ImGui::Button(S("size 2 ##menu"))){
                scale = 2;
            }
            if (ImGui::Button(S("size 3 ##menu"))){
                scale = 3;
            }
            ImGui::SameLine();
            if (ImGui::Button(S("size 4 ##menu"))){
                scale = 4;
            }
        }
        if (ch == 2) {
            ImGui::Text(S("Menu Creators"));
            if (ImGui::Button(S("Enze ##menu"))){
                scale = 5;
            }
            if (ImGui::Button(S("Pasted by ???? ##menu"))) {
                scale = 6;
            }
        }
    }
}
bool drawBehindMenu = true;

ImDrawList* getDrawList(){
    ImDrawList *drawList;
    if(drawBehindMenu){
        drawList = ImGui::GetBackgroundDrawList();
    } else {
        drawList = ImGui::GetForegroundDrawList();
    }
    return drawList;
}
int get_screen_width(){
    LOGD("DISTANCE VALID AND THRU");
    return scrW;
}
int get_screen_height(){
    return scrH;
}
struct Rect {
    float x,y,w,h;
};
void DrawMenu2() {
    LOGD("DISTANCE VALID AND THRU");
    if (visuals[44] && me != NULL) {
        float step = 2 * M_PI / 22; //(22 points)
        float h = get_playerPosition(me).x;
        float k = get_playerPosition(me).y;
        //float r = silentDistance;
        int e = 0;
        for (float theta = 0; theta < 2 * M_PI; theta += step) {
            void *zxcam = get_camera();
            float x = h + r * cos(theta);
            float y = k - r * sin(theta);
            e = e+1;
            if(e > 1){
                float xz = h + r * cos(theta-step);
                float yz = k - r * sin(theta-step);
                Vec3 Te = WorldToScreenPoint(zxcam,Vec3(x,GetPlayerPosition(me).y-10,y));
                Vec3 Tes = WorldToScreenPoint(zxcam,Vec3(xz,GetPlayerPosition(me).y-10,yz));
                if (Te.z < 1.f) continue;
                if (Tes.z < 1.f) continue;
                getDrawList()->AddLine(ImVec2(Tes.x,
                                              get_screen_height() - Tes.y), ImVec2(Te.x,
                                                                                    get_screen_height()),
                                       Silent_Distance, 3.5);
            }

        }
    }
    if (visuals[2]) {
        ImVec2 center = ImVec2(scrW / 2 - 1,
                               scrH/ 2 - 1);
        float x = center.x - (visual_lined_size / 2.0f);
        float y = center.y - (visual_lined_size / 2.0f);
        float center_y = center.y;
        float center_x = center.x;
        getDrawList()->AddLine(ImVec2(x, center_y), ImVec2(x + visual_lined_size, center_y),
                               Cross_Lined, visual_lined_stroke);
        getDrawList()->AddLine(ImVec2(center_x, y), ImVec2(center_x, y + visual_lined_size),
                               Cross_Lined, visual_lined_stroke);
    }
    if (visuals[1]) {
        getDrawList()->AddCircle(
                ImVec2(scrW / 2, scrH / 2),
                visual_circle_size, Cross_Circle, 0, visual_circle_stroke);
    }
    if (visuals[33]) {
        getDrawList()->AddCircle(
                ImVec2(scrW / 2, scrH / 2),
                get_screen_width() / 1020 * silentfov, Cross_Circle, 0, 2.5f);
    }
    if (is_Mine != nullptr) {
        if (!espManager->enemies->empty()) {
            for (int i = 0; i < espManager->enemies->size(); i++) {

                void *Player = (*espManager->enemies)[i]->object;
                void *PhotonPlayer = (*espManager->enemies)[i]->photon;
                float dist = Vector3::Distance(get_objectPosition(me),get_objectPosition(Player));
                if(dist < espdistance){

                }else{
                    LOGD("DISTANCE VALID AND THRU");
                    continue;
                }
				monoString *Nick = *(monoString **) ((uint64_t) PhotonPlayer + 0xC);
               
                if (IsOwnerActive(Player) && PhotonPlayer && Nick && (ne->team != GetPlayerTeam(PhotonPlayer))) {
                    LOGD("DISTANCE VALID AND THRU2");
                    Rect rect;
                    Color color = {255, 0, 0};
                    Vec3 PlayerPos = GetPlayerPosition(Player);
                    void *Cam = get_camera();
                    Vec3 PosNew = Vec3(0.f, 0.f, 0.f);
                    PosNew = WorldToScreenPoint(Cam, PlayerPos);
                    if (PosNew.z < 1.f) continue;
                    Vec3 Origin;
                    Origin = PlayerPos;
                    Origin.y += 0.7f;
                    float posnum = 1.1; //Hight slider * 0.1
                    float posnum2 = 1.2;//Size slider * 0.1
                    Origin.y += posnum;
                    Vec3 BoxPosNew = {0.f, 0.f, 0.f};
                    BoxPosNew = WorldToScreenPoint(Cam, Origin);
                    float Hight = abs(BoxPosNew.y - PosNew.y) * (posnum2 / posnum), Width =
                            Hight * 0.50f;//0.60
                    rect = {BoxPosNew.x - Width / 2.f, get_screen_height() - BoxPosNew.y, Width,
                            Hight};
                    if (ESPBox) {
                        LOGD("DISTANCE VALID AND BOX");
                        int x = rect.x;
                        int y = rect.y;
                        getDrawList()->AddRect(ImVec2(x, y), ImVec2(x + rect.w, y + rect.h),
                                               Esp_Box,
                                               visual_esp_box,0,visual_esp_boxth);
                    }
                    if (ESPGradientBox) {
                        int x = rect.x;
                        int y = rect.y;
                        getDrawList()->AddRectFilled(ImVec2(x, y), ImVec2(x + rect.w, y + rect.h),
                                                     Esp_Filed,
                                                     visual_esp_box_filedth);
                    }
                    if (ESPLine) {
                        if (visual_esp_line_type == 0){
                            getDrawList()->AddLine(
                                    ImVec2(get_screen_width() / 2, get_screen_height() / 2),
                                    ImVec2(rect.x + rect.w / 2, rect.y + rect.h / 25),
                                    Esp_Line, visual_esp_line);
                        }
                        if (visual_esp_line_type == 1){
                            getDrawList()->AddLine(
                                    ImVec2(get_screen_width() / 2, get_screen_height() / 1),
                                    ImVec2(rect.x + rect.w / 2, rect.y + rect.h / 1),
                                    Esp_Line, visual_esp_line);
                        }
                        if (visual_esp_line_type == 2){
                            getDrawList()->AddLine(
                                    ImVec2(get_screen_width() / 2, get_screen_height() / 1000),
                                    ImVec2(rect.x + rect.w / 2, rect.y + rect.h / 25),
                                    Esp_Line, visual_esp_line);
                        }

                    }
                    if (ESP360) {
                        float step = 2 * M_PI / 22; //(22 points)
                        float h = GetPlayerPosition(Player).x;
                        float k = GetPlayerPosition(Player).z;
                        float r = RadiusCircle;
                        int e = 0;
                        for (float theta = 0; theta < 2 * M_PI; theta += step) {
                            void *zxcam = get_camera();
                            float x = h + r * cos(theta);
                            float y = k - r * sin(theta);
                            e = e + 1;
                            if (e > 1) {
                                float xz = h + r * cos(theta - step);
                                float yz = k - r * sin(theta - step);
                                Vec3 Te = WorldToScreenPoint(zxcam,
                                                             Vec3(x,
                                                                  GetPlayerPosition(Player).y +
                                                                  YCircle,
                                                                  y));
                                Vec3 Tes = WorldToScreenPoint(zxcam,
                                                              Vec3(xz,
                                                                   GetPlayerPosition(Player).y +
                                                                   YCircle, yz));
                                if (Te.z < 1.f) continue;
                                if (Tes.z < 1.f) continue;
                                getDrawList()->AddLine(
                                        ImVec2(Tes.x, get_screen_height() - Tes.y),
                                        ImVec2(Te.x, get_screen_height() - Te.y),
                                        Esp_Text, visual_esp_line);
                            }
                        }
                    }
                    if (ESPDistance) {
                        int KDiste = Vec3::Distance(GetPlayerPosition(me),
                                                    GetPlayerPosition(Player));
                        char dist = (int)((ceil(log10(KDiste))+1)*sizeof(char));
                        std::string get_dist =   std::string((const char*) dist) + "m";

                        float xz = (float) (rect.w / 2.f);
                        float yz = (float) (rect.h / 2.f + 50);
                        getDrawList()->AddText(ImVec2(rect.x + xz, rect.y + yz), Esp_Dist,
                                               get_dist.c_str());
                    }
                    if (ESPHealth) {
                        float health = (float) GetPlayerHealth(PhotonPlayer) / 100.f;
                        float x = (rect.x + rect.w + 4);
                        float y = rect.y;
                        getDrawList()->AddRectFilled(ImVec2(x, y), ImVec2(x + 4, y + rect.h),
                                                     ImColor(1, 1, 1, 233),
                                                     visual_esp_box_filed);


                        getDrawList()->AddRectFilled(ImVec2(x, y),
                                                     ImVec2(x + 3.5f, y + rect.h * health),
                                                     Esp_He,
                                                     visual_esp_box_filed);
                    }
					if (ESPNick) {
                        getDrawList()->AddText(ImVec2(rect.x + (rect.w / 2.f - 0), rect.y - 10),
                                               Esp_Text, Nick->toChars());
                    }
                    

                } else {
                    espManager->removeEnemyGivenObject(Player);
                }
            }
        }
    }
    

    SetBlackGoldTheme();
    ImGuiIO &io = ImGui::GetIO();
    ImGuiStyle* style = &ImGui::GetStyle();
    ImVec4* colors = style->Colors;
    colors[ImGuiCol_Button]                 = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
    colors[ImGuiCol_ButtonHovered]          = ImVec4(0.4f, 0.4f, 0.4f, 1.00f);
    colors[ImGuiCol_ButtonActive]           = ImVec4(0.4f, 0.4f, 0.4f, 1.00f);
    ImGui::SetNextWindowPos(ImVec2(io.DisplaySize.x / 2, io.DisplaySize.y / 2), ImGuiCond_FirstUseEver);
    ImGui::SetNextWindowSize(ImVec2(100, 100));

    ImGui::Begin(("open"), &bil2, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoMove);
    if (ImGui::InvisibleButton("OPEN",ImVec2(50,50))) {
        openeds = !openeds;
    }
    ImGui::End();

    if (!openeds) return;
    styles();
    ImGui::GetStyle().Alpha = 0.97f;
    ImGui::GetStyle().Colors[ImGuiCol_FrameBg] = ImVec4(0, 0, 0, 0);
    ImGui::GetStyle().Colors[ImGuiCol_FrameBgActive] = ImVec4(0, 0, 0, 0);
    ImGui::GetStyle().Colors[ImGuiCol_FrameBgHovered] = ImVec4(0, 0, 0, 0);


    ImGui::SetNextWindowPos(ImVec2(400, 400), ImGuiCond_FirstUseEver);
    ImGui::SetNextWindowSize(ImVec2(600, 450), ImGuiCond_FirstUseEver);
    ImGui::Begin("suka", &boels, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoScrollbar);
    ImGui::GetWindowDrawList()->AddRectFilled(ImGui::GetWindowPos(), ImVec2(ImGui::GetWindowPos().x + 600, ImGui::GetWindowPos().y + 450),ImColor(20,10,0,180));
    ImGui::GetWindowDrawList()->AddRectFilled(ImVec2(ImGui::GetWindowPos().x + 6, ImGui::GetWindowPos().y + 6), ImVec2(ImGui::GetWindowPos().x + 600 - 6, ImGui::GetWindowPos().y + 450 - 6),ImColor(0,0,0, 128));
    ImGui::GetWindowDrawList()->AddRectFilled(ImVec2(ImGui::GetWindowPos().x + 30, ImGui::GetWindowPos().y + 40 + 5), ImVec2(ImGui::GetWindowPos().x + 600 - 30, ImGui::GetWindowPos().y + 40 + 4  + 5),ImColor(255, 0, 0));
    ImGui::GetWindowDrawList()->AddText(ImGui::GetFont(),26,ImVec2(ImGui::GetWindowPos().x + 300 + 6 - (ImGui::CalcTextSize(S("AutoSkillz 0.21.0 F2")).x / 22 * 26) / 2,ImGui::GetWindowPos().y + 26 - (ImGui::CalcTextSize(S("AutoSkillz 0.21.0 F2")).y / 22 * 26) / 2),ImColor(255,255,255),S("AutoSkillz 0.21.0 F2"));

    ImGui::SetCursorPos(ImVec2(30 + 0, 40 + 5 + 10));
    if (ImGui::Button(S("visual"),ImVec2(103,30))) csel = 1;

    ImGui::SetCursorPos(ImVec2(30 + 103 + 6, 40 + 5 + 10));
    if (ImGui::Button(S("aim"),ImVec2(103,30))) csel = 2;

    ImGui::SetCursorPos(ImVec2(30 + 103 + 103 + 12, 40 + 5 + 10));
    if (ImGui::Button(S("skins"),ImVec2(103,30))) csel = 3;

    ImGui::SetCursorPos(ImVec2(30 + 103 + 103 + 103 + 18, 40 + 5 + 10));
    if (ImGui::Button(S("world"),ImVec2(103,30))) csel = 4;

    ImGui::SetCursorPos(ImVec2(30 + 103 + 103 + 103 + 103 + 24, 40 + 5 + 10));
    if (ImGui::Button(S("info"),ImVec2(103,30))) csel = 5;

    ImGui::SetCursorPos(ImVec2(30, 40 + 5 + 10 + 30 + 10 + 5));
    if (ImGui::BeginListBox(" ", ImVec2(265, 300))) {
        featurese(csel, 1);
        ImGui::EndListBox();
    }
    ImGui::SetCursorPos(ImVec2(30 + 265 + 10, 40 + 5 + 10 + 30 + 10 + 5));
    if (ImGui::BeginListBox("  ", ImVec2(265, 300))) {
        featurese(csel, 2);
        ImGui::EndListBox();
    }
    ImGui::GetWindowDrawList()->AddRect(ImVec2(ImGui::GetWindowPos().x + 30, ImGui::GetWindowPos().y + 40 + 5 + 10 + 30 + 10 + 5), ImVec2(ImGui::GetWindowPos().x + 30 + 265, ImGui::GetWindowPos().y + 40 + 5 + 10 + 30 + 10 + 5 + 300),ImColor(255,255,255));
    ImGui::GetWindowDrawList()->AddRect(ImVec2(ImGui::GetWindowPos().x + 30 + 265 + 10, ImGui::GetWindowPos().y + 40 + 5 + 10 + 30 + 10 + 5), ImVec2(ImGui::GetWindowPos().x + 30 + 265 + 265 + 10, ImGui::GetWindowPos().y + 40 + 5 + 10 + 30 + 10 + 5 + 300),ImColor(255,255,255));

    ImGui::End();
}
void glInit()
{
    if (!init)
    {
        auto context = ImGui::CreateContext();
        if (!context)
        {
            return;
        }
        ImGuiIO &io = ImGui::GetIO();
        ImFontConfig font_cfg2;
        font_cfg2.SizePixels = 22.0f;
        font_cfg2.GlyphRanges = io.Fonts->GetGlyphRangesCyrillic();
        io.Fonts->AddFontDefault(&font_cfg2);
        ImFontConfig font_cfg;
        font_cfg.MergeMode = true;
        static const ImWchar icon_ranges[] = {ICON_MIN_FA, ICON_MAX_FA, 0x0};
        io.Fonts->AddFontFromMemoryCompressedBase85TTF(FontAwesome6_compressed_data_base85, 22.0f, &font_cfg, icon_ranges);

        io.IniFilename = NULL;
        io.KeyMap[ImGuiKey_UpArrow] = 19;
        io.KeyMap[ImGuiKey_DownArrow] = 20;
        io.KeyMap[ImGuiKey_LeftArrow] = 21;
        io.KeyMap[ImGuiKey_RightArrow] = 22;
        io.KeyMap[ImGuiKey_Enter] = 66;
        io.KeyMap[ImGuiKey_Backspace] = 67;
        io.KeyMap[ImGuiKey_PageUp] = 92;
        io.KeyMap[ImGuiKey_PageDown] = 93;
        io.KeyMap[ImGuiKey_Escape] = 111;
        io.KeyMap[ImGuiKey_Delete] = 112;
        io.KeyMap[ImGuiKey_Home] = 122;
        io.KeyMap[ImGuiKey_End] = 123;
        io.KeyMap[ImGuiKey_Insert] = 124;
        io.KeyMap[ImGuiKey_UpArrow] = 19;
        io.KeyMap[ImGuiKey_DownArrow] = 20;
        io.KeyMap[ImGuiKey_LeftArrow] = 21;
        io.KeyMap[ImGuiKey_RightArrow] = 22;
        io.KeyMap[ImGuiKey_Enter] = 66;
        io.KeyMap[ImGuiKey_Backspace] = 67;
        io.KeyMap[ImGuiKey_PageUp] = 92;
        io.KeyMap[ImGuiKey_PageDown] = 93;
        io.KeyMap[ImGuiKey_Escape] = 111;
        io.KeyMap[ImGuiKey_Delete] = 112;
        io.KeyMap[ImGuiKey_Home] = 122;
        io.KeyMap[ImGuiKey_End] = 123;
        io.KeyMap[ImGuiKey_Insert] = 124;

        SetBlackGoldTheme();

        ImGui::GetStyle().ScaleAllSizes(3.0f);

        ImGui_ImplAndroid_Init(nullptr);
        ImGui_ImplOpenGL3_Init();

        init = true;
    }
    if (init){
        ImGuiIO &io = ImGui::GetIO();
        static bool WantTextInputLast = false;
//            if (io.WantTextInput && !WantTextInputLast)
//                displayKeyboard(true);
//            WantTextInputLast = io.WantTextInput;
        ImGui_ImplOpenGL3_NewFrame();
        ImGui_ImplAndroid_NewFrame(scrW, scrH);;
        ImGui::NewFrame();
        DrawMenu2();
        ImGui::Render();
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
        io.KeysDown[io.KeyMap[ImGuiKey_UpArrow]] = false;
        io.KeysDown[io.KeyMap[ImGuiKey_DownArrow]] = false;
        io.KeysDown[io.KeyMap[ImGuiKey_LeftArrow]] = false;
        io.KeysDown[io.KeyMap[ImGuiKey_RightArrow]] = false;
        io.KeysDown[io.KeyMap[ImGuiKey_Tab]] = false;
        io.KeysDown[io.KeyMap[ImGuiKey_Enter]] = false;
        io.KeysDown[io.KeyMap[ImGuiKey_Backspace]] = false;
        io.KeysDown[io.KeyMap[ImGuiKey_PageUp]] = false;
        io.KeysDown[io.KeyMap[ImGuiKey_PageDown]] = false;
        io.KeysDown[io.KeyMap[ImGuiKey_Escape]] = false;
        io.KeysDown[io.KeyMap[ImGuiKey_Delete]] = false;
        io.KeysDown[io.KeyMap[ImGuiKey_Home]] = false;
        io.KeysDown[io.KeyMap[ImGuiKey_End]] = false;
        io.KeysDown[io.KeyMap[ImGuiKey_Insert]] = false;
        ImGui::EndFrame();
    }
}
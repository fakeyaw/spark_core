#include "autoaddr.h" //include адресной фигни ну для поиска переписанна мной под unsigned long
#include "autohelp.h" //include vectors,monostr and etc ну крч всё говно
typedef bool boolean;
typedef unsigned int uint;
int positionslot,positionslot1,positionslot2,positionslot3,positionslot4,positionslot5;
boolean akrs,akr12s,m4s,m16s,awms = false;
boolean m9229,babochka,usp,m16winget,kera,m4sam,yakuza,g22n,p350f,tec9,fsven,awmb,awm2,awmg,dg,jk = false;
boolean akr123,akr228 = false;
int stickerset,stickerset1,stickerset2,stickerset3;
void* enemy = nullptr;
void *me = nullptr;
void *team = nullptr;
int stickakr1, stickakr2, stickakr3, stickakr121, stickakr122, stickakr123, stickawm1, stickawm2, stickawm3, stickm41, stickm42, stickm43, stickm161, stickm162, stickm163;
int stickakr;
int stickakr12;
int stickawm;
int stickm4;
int pos1;
int stickm16;
bool stickercall;
bool goldSkullzAkr1,AntiKemperAkr1,HurryGhostAkr1,FeedAkr1,z9MuskAkr1,SamuraiAkr1,DragonAkr1,NiceSkillColorAkr1,goldSkullzAkr2,AntiKemperAkr2,HurryGhostAkr2,FeedAkr2,z9MuskAkr2,SamuraiAkr2,DragonAkr2,NiceSkillColorAkr2;
bool goldSkullzAkr3,AntiKemperAkr3,HurryGhostAkr3,FeedAkr3,z9MuskAkr3,SamuraiAkr3,DragonAkr3,NiceSkillColorAkr3;
bool goldSkullzAkr4,AntiKemperAkr4,HurryGhostAkr4,FeedAkr4,z9MuskAkr4,SamuraiAkr4,DragonAkr4,NiceSkillColorAkr4;
bool goldSkullzakr121,AntiKemperakr121,HurryGhostakr121,Feedakr121,z9Muskakr121,Samuraiakr121,Dragonakr121,NiceSkillColorakr121,goldSkullzakr122,AntiKemperakr122,HurryGhostakr122,Feedakr122,z9Muskakr122,Samuraiakr122,Dragonakr122,NiceSkillColorakr122;
bool goldSkullzakr123,AntiKemperakr123,HurryGhostakr123,Feedakr123,z9Muskakr123,Samuraiakr123,Dragonakr123,NiceSkillColorakr123;
bool goldSkullzakr124,AntiKemperakr124,HurryGhostakr124,Feedakr124,z9Muskakr124,Samuraiakr124,Dragonakr124,NiceSkillColorakr124;
bool goldSkullzm41,AntiKemperm41,HurryGhostm41,Feedm41,z9Muskm41,Samuraim41,Dragonm41,NiceSkillColorm41,goldSkullzm42,AntiKemperm42,HurryGhostm42,Feedm42,z9Muskm42,Samuraim42,Dragonm42,NiceSkillColorm42;
bool goldSkullzm43,AntiKemperm43,HurryGhostm43,Feedm43,z9Muskm43,Samuraim43,Dragonm43,NiceSkillColorm43;
bool goldSkullzm44,AntiKemperm44,HurryGhostm44,Feedm44,z9Muskm44,Samuraim44,Dragonm44,NiceSkillColorm44;
bool goldSkullzm161,AntiKemperm161,HurryGhostm161,Feedm161,z9Muskm161,Samuraim161,Dragonm161,NiceSkillColorm161,goldSkullzm162,AntiKemperm162,HurryGhostm162,Feedm162,z9Muskm162,Samuraim162,Dragonm162,NiceSkillColorm162;
bool goldSkullzm163,AntiKemperm163,HurryGhostm163,Feedm163,z9Muskm163,Samuraim163,Dragonm163,NiceSkillColorm163;
bool goldSkullzm164,AntiKemperm164,HurryGhostm164,Feedm164,z9Muskm164,Samuraim164,Dragonm164,NiceSkillColorm164;
bool goldSkullzawm1,AntiKemperawm1,HurryGhostawm1,Feedawm1,z9Muskawm1,Samuraiawm1,Dragonawm1,NiceSkillColorawm1,goldSkullzawm2,AntiKemperawm2,HurryGhostawm2,Feedawm2,z9Muskawm2,Samuraiawm2,Dragonawm2,NiceSkillColorawm2;
bool goldSkullzawm3,AntiKemperawm3,HurryGhostawm3,Feedawm3,z9Muskawm3,Samuraiawm3,Dragonawm3,NiceSkillColorawm3;
bool goldSkullzawm4,AntiKemperawm4,HurryGhostawm4,Feedawm4,z9Muskawm4,Samuraiawm4,Dragonawm4,NiceSkillColorawm4;
void *aimed = nullptr;
ulong positionoffset = 0x27225C0;
ulong transformoffset = 0x26F268C;
ulong plpositionoffset = 0x2722544;
ulong rotationoffset = 0x27229D4;
ulong getcameraoffset = 0x26E5D34;
ulong getbipedmapoffset = 0x1CDE06C;
ulong islocaloffset = 0x2930FD8;
ulong setpositioninj = 0x2722670;
ulong setposition = 0x2722670;
ulong worldtoscrinj = 0x26E5118;
ulong getplayerteam = 0x1CDECFC;
ulong getplayerhealth = 0x1CDC7AC;
ulong gettimeoffset = 0x26E9FF0;
ulong joystickaxis = 0x1E4FA48;
boolean autowin;
void *(*get_camera)();
int (*GetPlayerTeam)(void* player);
int (*GetPlayerHealth)(void* player);
bool (*IsLocal)(void* player);
static void *get_photon(void *player) {
    return *(void **)((uint64_t) player + 0xA8);
}
float (*get_deltaTime)();
bool IsPlayerDied(void *player) {
    if (player) {
        int health = GetPlayerHealth(player);
        if (health <= 0) {
            return true;
        }
    }
    return false;
}
int (*_autowinct)(void *inst);
int autowinct(void *inst){
	if (autowin){
		return 0;
	}
	return _autowinct(inst);
}
int (*old_EquipedKnife)(void *instance);
int EquipedKnife(void *instance) {

    if (m9229) {
        return 71;
	} else if (babochka) {
        return 75;
    } else if (dg) {
        return 81;
    } else if (kera) {
        return 72;
    } else if (jk) {
        return 73;
    }
    return old_EquipedKnife(instance);
}

int (*old_EquipedSkin)(void *instance, int weaponId);
int EquipedSkin(void *instance, int weaponId) {
if(goldSkullzAkr1){
	stickakr = 1101;
}
if(goldSkullzAkr2){
	stickakr1 = 1101;
}
if(goldSkullzAkr3){
	stickakr2 = 1101;
}
if(goldSkullzAkr4){
	stickakr3 = 1101;
}
if(goldSkullzAkr1){
	stickakr = 1101;
}
if(goldSkullzAkr2){
	stickakr1 = 1101;
}
if(goldSkullzAkr3){
	stickakr2 = 1101;
}
if(goldSkullzAkr4){
	stickakr3 = 1101;
}
if(AntiKemperAkr1){
	stickakr = 1112;
}
if(AntiKemperAkr2){
	stickakr1 = 1112;
}
if(AntiKemperAkr3){
	stickakr2 = 1112;
}
if(AntiKemperAkr4){
	stickakr3 = 1112;
}
if(HurryGhostAkr1){
	stickakr = 1110;
}
if(HurryGhostAkr2){
	stickakr1 = 1110;
}
if(HurryGhostAkr3){
	stickakr2 = 1110;
}
if(HurryGhostAkr4){
	stickakr3 = 1110;
}
if(FeedAkr1){
	stickakr = 1111;
}
if(FeedAkr2){
	stickakr1 = 1111;
}
if(FeedAkr3){
	stickakr2 = 1111;
}
if(FeedAkr4){
	stickakr3 = 1111;
}
if(z9MuskAkr1){
	stickakr = 1139;
}
if(z9MuskAkr2){
	stickakr1 = 1139;
}
if(z9MuskAkr3){
	stickakr2 = 1139;
}
if(z9MuskAkr4){
	stickakr3 = 1139;
}
if(SamuraiAkr1){
	stickakr = 1211;
}
if(SamuraiAkr2){
	stickakr1 = 1211;
}
if(SamuraiAkr3){
	stickakr2 = 1211;
}
if(SamuraiAkr4){
	stickakr3 = 1211;
}
if(DragonAkr1){
	stickakr = 1203;
}
if(DragonAkr2){
	stickakr1 = 1203;
}
if(DragonAkr3){
	stickakr2 = 1203;
}
if(DragonAkr4){
	stickakr3 = 1203;
}
if(NiceSkillColorAkr1){
	stickakr = 1209;
}
if(NiceSkillColorAkr2){
	stickakr1 = 1209;
}
if(NiceSkillColorAkr3){
	stickakr2 = 1209;
}
if(NiceSkillColorAkr4){
	stickakr3 = 1209;
}
if(goldSkullzakr121){
	stickakr12 = 1101;
}
if(goldSkullzakr122){
	stickakr121 = 1101;
}
if(goldSkullzakr123){
	stickakr122 = 1101;
}
if(goldSkullzakr124){
	stickakr123 = 1101;
}
if(goldSkullzakr121){
	stickakr12 = 1101;
}
if(goldSkullzakr122){
	stickakr121 = 1101;
}
if(goldSkullzakr123){
	stickakr122 = 1101;
}
if(goldSkullzakr124){
	stickakr123 = 1101;
}
if(AntiKemperakr121){
	stickakr12 = 1112;
}
if(AntiKemperakr122){
	stickakr121 = 1112;
}
if(AntiKemperakr123){
	stickakr122 = 1112;
}
if(AntiKemperakr124){
	stickakr123 = 1112;
}
if(HurryGhostakr121){
	stickakr12 = 1110;
}
if(HurryGhostakr122){
	stickakr121 = 1110;
}
if(HurryGhostakr123){
	stickakr122 = 1110;
}
if(HurryGhostakr124){
	stickakr123 = 1110;
}
if(Feedakr121){
	stickakr12 = 1111;
}
if(Feedakr122){
	stickakr121 = 1111;
}
if(Feedakr123){
	stickakr122 = 1111;
}
if(Feedakr124){
	stickakr123 = 1111;
}
if(z9Muskakr121){
	stickakr12 = 1139;
}
if(z9Muskakr122){
	stickakr121 = 1139;
}
if(z9Muskakr123){
	stickakr122 = 1139;
}
if(z9Muskakr124){
	stickakr123 = 1139;
}
if(Samuraiakr121){
	stickakr12 = 1211;
}
if(Samuraiakr122){
	stickakr121 = 1211;
}
if(Samuraiakr123){
	stickakr122 = 1211;
}
if(Samuraiakr124){
	stickakr123 = 1211;
}
if(Dragonakr121){
	stickakr12 = 1203;
}
if(Dragonakr122){
	stickakr121 = 1203;
}
if(Dragonakr123){
	stickakr122 = 1203;
}
if(Dragonakr124){
	stickakr123 = 1203;
}
if(NiceSkillColorakr121){
	stickakr12 = 1209;
}
if(NiceSkillColorakr122){
	stickakr121 = 1209;
}
if(NiceSkillColorakr123){
	stickakr122 = 1209;
}
if(NiceSkillColorakr124){
	stickakr123 = 1209;
}
if(goldSkullzm41){
	stickm4 = 1101;
}
if(goldSkullzm42){
	stickm41 = 1101;
}
if(goldSkullzm43){
	stickm42 = 1101;
}
if(goldSkullzm44){
	stickm43 = 1101;
}
if(goldSkullzm41){
	stickm4 = 1101;
}
if(goldSkullzm42){
	stickm41 = 1101;
}
if(goldSkullzm43){
	stickm42 = 1101;
}
if(goldSkullzm44){
	stickm43 = 1101;
}
if(AntiKemperm41){
	stickm4 = 1112;
}
if(AntiKemperm42){
	stickm41 = 1112;
}
if(AntiKemperm43){
	stickm42 = 1112;
}
if(AntiKemperm44){
	stickm43 = 1112;
}
if(HurryGhostm41){
	stickm4 = 1110;
}
if(HurryGhostm42){
	stickm41 = 1110;
}
if(HurryGhostm43){
	stickm42 = 1110;
}
if(HurryGhostm44){
	stickm43 = 1110;
}
if(Feedm41){
	stickm4 = 1111;
}
if(Feedm42){
	stickm41 = 1111;
}
if(Feedm43){
	stickm42 = 1111;
}
if(Feedm44){
	stickm43 = 1111;
}
if(z9Muskm41){
	stickm4 = 1139;
}
if(z9Muskm42){
	stickm41 = 1139;
}
if(z9Muskm43){
	stickm42 = 1139;
}
if(z9Muskm44){
	stickm43 = 1139;
}
if(Samuraim41){
	stickm4 = 1211;
}
if(Samuraim42){
	stickm41 = 1211;
}
if(Samuraim43){
	stickm42 = 1211;
}
if(Samuraim44){
	stickm43 = 1211;
}
if(Dragonm41){
	stickm4 = 1203;
}
if(Dragonm42){
	stickm41 = 1203;
}
if(Dragonm43){
	stickm42 = 1203;
}
if(Dragonm44){
	stickm43 = 1203;
}
if(NiceSkillColorm41){
	stickm4 = 1209;
}
if(NiceSkillColorm42){
	stickm41 = 1209;
}
if(NiceSkillColorm43){
	stickm42 = 1209;
}
if(NiceSkillColorm44){
	stickm43 = 1209;
}
if(goldSkullzm161){
	stickm16 = 1101;
}
if(goldSkullzm162){
	stickm161 = 1101;
}
if(goldSkullzm163){
	stickm162 = 1101;
}
if(goldSkullzm164){
	stickm163 = 1101;
}
if(goldSkullzm161){
	stickm16 = 1101;
}
if(goldSkullzm162){
	stickm161 = 1101;
}
if(goldSkullzm163){
	stickm162 = 1101;
}
if(goldSkullzm164){
	stickm163 = 1101;
}
if(AntiKemperm161){
	stickm16 = 1112;
}
if(AntiKemperm162){
	stickm161 = 1112;
}
if(AntiKemperm163){
	stickm162 = 1112;
}
if(AntiKemperm164){
	stickm163 = 1112;
}
if(HurryGhostm161){
	stickm16 = 1110;
}
if(HurryGhostm162){
	stickm161 = 1110;
}
if(HurryGhostm163){
	stickm162 = 1110;
}
if(HurryGhostm164){
	stickm163 = 1110;
}
if(Feedm161){
	stickm16 = 1111;
}
if(Feedm162){
	stickm161 = 1111;
}
if(Feedm163){
	stickm162 = 1111;
}
if(Feedm164){
	stickm163 = 1111;
}
if(z9Muskm161){
	stickm16 = 1139;
}
if(z9Muskm162){
	stickm161 = 1139;
}
if(z9Muskm163){
	stickm162 = 1139;
}
if(z9Muskm164){
	stickm163 = 1139;
}
if(Samuraim161){
	stickm16 = 1211;
}
if(Samuraim162){
	stickm161 = 1211;
}
if(Samuraim163){
	stickm162 = 1211;
}
if(Samuraim164){
	stickm163 = 1211;
}
if(Dragonm161){
	stickm16 = 1203;
}
if(Dragonm162){
	stickm161 = 1203;
}
if(Dragonm163){
	stickm162 = 1203;
}
if(Dragonm164){
	stickm163 = 1203;
}
if(NiceSkillColorm161){
	stickm16 = 1209;
}
if(NiceSkillColorm162){
	stickm161 = 1209;
}
if(NiceSkillColorm163){
	stickm162 = 1209;
}
if(NiceSkillColorm164){
	stickm163 = 1209;
}
if(goldSkullzawm1){
	stickawm = 1101;
}
if(goldSkullzawm2){
	stickawm1 = 1101;
}
if(goldSkullzawm3){
	stickawm2 = 1101;
}
if(goldSkullzawm4){
	stickawm3 = 1101;
}
if(goldSkullzawm1){
	stickawm = 1101;
}
if(goldSkullzawm2){
	stickawm1 = 1101;
}
if(goldSkullzawm3){
	stickawm2 = 1101;
}
if(goldSkullzawm4){
	stickawm3 = 1101;
}
if(AntiKemperawm1){
	stickawm = 1112;
}
if(AntiKemperawm2){
	stickawm1 = 1112;
}
if(AntiKemperawm3){
	stickawm2 = 1112;
}
if(AntiKemperawm4){
	stickawm3 = 1112;
}
if(HurryGhostawm1){
	stickawm = 1110;
}
if(HurryGhostawm2){
	stickawm1 = 1110;
}
if(HurryGhostawm3){
	stickawm2 = 1110;
}
if(HurryGhostawm4){
	stickawm3 = 1110;
}
if(Feedawm1){
	stickawm = 1111;
}
if(Feedawm2){
	stickawm1 = 1111;
}
if(Feedawm3){
	stickawm2 = 1111;
}
if(Feedawm4){
	stickawm3 = 1111;
}
if(z9Muskawm1){
	stickawm = 1139;
}
if(z9Muskawm2){
	stickawm1 = 1139;
}
if(z9Muskawm3){
	stickawm2 = 1139;
}
if(z9Muskawm4){
	stickawm3 = 1139;
}
if(Samuraiawm1){
	stickawm = 1211;
}
if(Samuraiawm2){
	stickawm1 = 1211;
}
if(Samuraiawm3){
	stickawm2 = 1211;
}
if(Samuraiawm4){
	stickawm3 = 1211;
}
if(Dragonawm1){
	stickawm = 1203;
}
if(Dragonawm2){
	stickawm1 = 1203;
}
if(Dragonawm3){
	stickawm2 = 1203;
}
if(Dragonawm4){
	stickawm3 = 1203;
}
if(NiceSkillColorawm1){
	stickawm = 1209;
}
if(NiceSkillColorawm2){
	stickawm1 = 1209;
}
if(NiceSkillColorawm3){
	stickawm2 = 1209;
}
if(NiceSkillColorawm4){
	stickawm3 = 1209;
}
	if (m9229 && weaponId == 71) {
        return 71005;
    } else if (weaponId == 44) {
		stickerset = stickakr;
		stickerset1 = stickakr1;
		stickerset2 = stickakr2;
		stickerset3 = stickakr3;
		if(akr123){
        return 44002;
		}
	} else if (weaponId == 45) {
				stickerset = stickakr12;
		stickerset1 = stickakr121;
		stickerset2 = stickakr122;
		stickerset3 = stickakr123;
		if(akr228){
        return 45001;
		}
    } else if (babochka && weaponId == 75) {
        return 47502;
    } else if (weaponId == 47) {
				stickerset = stickm16;
		stickerset1 = stickm161;
		stickerset2 = stickm162;
		stickerset3 = stickm163;
		if(m16winget){
        return 47002;
		}
    } else if (weaponId == 46) {
			stickerset = stickm4;
		stickerset1 = stickm41;
		stickerset2 = stickm42;
		stickerset3 = stickm43;
		if(m4sam){
        return 44603;
		}
    } else if (yakuza && weaponId == 15) {
        return 131500;
    } else if (usp && weaponId == 12) {
        return 61201;
    } else if (g22n && weaponId == 11) {
        return 11002;
    } else if (p350f && weaponId == 13) {
        return 13003;
    } else if (tec9 && weaponId == 16) {
        return 61601;
    } else if (fsven && weaponId == 17) {
		
        return 41701;
    } else if (weaponId == 51) {
			stickerset = stickawm;
		stickerset1 = stickawm1;
		stickerset2 = stickawm2;
		stickerset3 = stickawm3;
		if(awmb){
        return 125100;
		} else if(awm2){
        return 51006;
		} else if(awmg){
        return 51007;
		}
    } else if (dg && weaponId == 81) {
        return 170023;
    } else if (kera && weaponId == 72) {
        return 72002;
    } else if (jk && weaponId == 73) {
        return 73004;
    }
    return old_EquipedSkin(instance, weaponId);
}
int otchimnorki;
int (*old_stick)(void *instance, int otchimnorki);
int stick(void *instance, int otchimnorki) {
    if (stickercall && otchimnorki == 1) return stickerset;
   if (stickercall && otchimnorki == 2) return stickerset1;
   if (stickercall && otchimnorki == 3) return stickerset2;
   if (stickercall && otchimnorki == 4) return stickerset3;
   return old_stick(instance, otchimnorki);
}
void (*_get_position)(void *transform, Vector3 *out);
void *(*GetPhoton)(void *player);
void *(*get_transform)(void *object);
void (*set_poskill)(void *transform, Vector3_2 newPosition);
void (*set_pospl)(void *transform, Vector3 newPosition);
Vector3_2 get_posskill(void *transform) {
    if (!transform)
        return Vector3_2();
    Vector3_2 position;
    static const auto get = reinterpret_cast<uint64_t(__fastcall *)(void *, Vector3_2 &)>(getAdresss(positionoffset));
    get(transform, position);
    return position;
}
Vector3 get_posspl(void *transform) {
    if (!transform)
        return Vector3();
    Vector3 position;
    static const auto get = reinterpret_cast<uint64_t(__fastcall *)(void *, Vector3 &)>(getAdresss(positionoffset));
    get(transform, position);
    return position;
}
Vector3 get_position123(void *instance) {
    Vector3 position123;
    _get_position(instance, &position123);
    return position123;
}
Quaternion (*get_rotation)(void*);
static Vector3 get_forward(void *player) {
    return get_rotation((player)) * Vector3(0, 0, 1);
}
static Vector3 get_left(void *player) {
    return get_rotation((player)) * Vector3(-1, 0, 0);
}
static Vector3 get_right(void *player) {
    return get_rotation((player)) * Vector3(1, 0, 0);
}
Vector3_2 get_playerPosition(void *player) {
    Vector3_2 location;
    location = get_posskill(get_transform(player));
    return location;
}
Vector3 get_objectPosition(void *player) {
    Vector3 location;
    location = get_posspl(get_transform(player));
    return location;
}
static void *get_aim(void *player) {
    return *(void **) ((uint64_t) player + 0x30);
}
bool shooted;
void (*_Fire)(...) ;
void Fire(void *instance, bool shoot) {
    if (instance) {
        shooted = shoot;
    }
    _Fire(instance, shoot);
}
Vector3(*get_BonePositon)(void *component);
Vector3 aimedBonePos = Vector3(0,0,0);
void *(*get_bipedmap)(void *nuls);
int HeadPercent = 17;
int NeckPercent = 37;
int BodyPercent = 47;
boolean silentaim;
boolean masskill,telekill,isHead,isNeck,isBody,ammo,firerate,recoil,wallshoot,fly,freez,airjump,handspos,spinbot;
int speedSpin, downSpin, spinX, spinY;
int silentfov = 40,handsX,handsY,handsZ,espdistance = 40;
boolean silentaim1;
void *(*get_main)(void);
int SmoothValue = 5; //смутч слайдер
static float AngleSpeed;
boolean ShootingCheck = false;
int DistanceValue; //дистанция слайдер
void (*old_PlayerController)(void* player);
bool aimOn = false;
void PlayerController(void* player) {
    if (player != nullptr){
        if (IsLocal(get_photon(player))) {
            me = player;
        }
        if (me){
            if (GetPlayerTeam(me) == GetPlayerTeam(player) && !IsLocal(player) ) {
                team = player;
            }
            if (GetPlayerTeam(me) != GetPlayerTeam(player)) {
                enemy = player;
            }
        }
		
        if (enemy){
            if (telekill){
                Vector3_2 enemyLocation = get_playerPosition(enemy);
                set_poskill(get_transform(me), Vector3_2(enemyLocation.x, enemyLocation.y + 1, enemyLocation.z - 1));
            }
            if (masskill){
                Vector3_2 PlayerLocation = get_playerPosition(me);
                set_poskill(get_transform(enemy), Vector3_2(PlayerLocation.x, PlayerLocation.y, PlayerLocation.z + 1));
            }
			            if (handspos) {
                void *arms = *(void **) ((uint64_t) player + 0x40);
                if (arms) {
                    *(Vector3 *) ((uint64_t) arms + 0x94) =
                            Vector3(handsX, handsY, handsZ) / 50;
                    *(bool *) ((uint64_t) arms + 0x44) = !handspos;
                }
            }
            if (spinbot){
                Vector3 Spins = Vector3(spinX,spinY,0.0f);
                void *aimingdata = *(void **) ((uint64_t) get_aim(me) + 0x5C);
                *(Vector3 *) ((uint64_t) aimingdata + 0x10) = Spins;
                *(Vector3 *) ((uint64_t) aimingdata + 0x1C) = Spins;
                spinY += speedSpin;
                spinX += downSpin;
            }
			if(aimOn){
				if (enemy){
				if(!IsPlayerDied(enemy)){
Vector3 targetPos = get_playerPosition(enemy) - get_playerPosition(me);

Quaternion PlayerRotation = Quaternion::LookRotation(targetPos, Vector3::Up());

//set_rotation(get_transform(me), PlayerRotation);
				}
				}
		}
        if (silentaim) {
            if (enemy) {
                if (me) {
                    if(!IsPlayerDied(me) && !IsPlayerDied(enemy)) {

                        void *AimInst = * (void **)((uint64_t) me + 0x30);
                        void *AimingData = * (void **)((uint64_t) AimInst + 0x5C);

                        Vector3 current = get_forward(get_transform(get_main()));
                        Vector3 target = (get_position123(get_transform(enemy)) + Vector3(0.0f, -0.40f, 0.0f)) - get_position123(get_transform(me));

                         AngleSpeed = float(SmoothValue) * get_deltaTime();
                         float Distance = Vector3::Distance(get_position123(get_transform(me)), get_position123(get_transform(enemy)));

                            
                       * (Vector3 *)((uint64_t) AimingData + 0x10) = Vector3::RotateTowards(current, target, AngleSpeed, NULL);

                       * (Vector3 *)((uint64_t) AimingData + 0x1C) = Vector3::RotateTowards(current, target, AngleSpeed, NULL);
                        
						}
                    }

            }
        }
		}
            /*
            if (silentaim){
                isHead = (rand() % 100) <= HeadPercent;
                isNeck = (rand() % 100) <= NeckPercent;
                isBody = (rand() % 100) <= BodyPercent;
                if (get_bipedmap(enemy)) {
                    void *aimedPlayerHead = *(void * *) ((uint64_t) get_bipedmap(enemy) + 0xC);
                    void *aimedPlayerNeck = *(void * *) ((uint64_t) get_bipedmap(enemy) + 0x10);
                    void *aimedPlayerSpine = *(void * *) ((uint64_t) get_bipedmap(enemy) + 0x14);
                    if (isHead) {
                        if (aimedPlayerHead) {
                            Vector3 target = get_BonePositon(aimedPlayerHead) - get_objectPosition(get_camera());
                            float aimAngle = Vector3::Angle(target, get_forward(get_transform(get_camera())) * 100);
                            if (aimAngle <= silentfov / 360) {
                                aimedBonePos = get_BonePositon(aimedPlayerHead);
                                aimed = enemy;
                            }
                        }
                    }if (isNeck) {
                        if (aimedPlayerNeck) {
                            Vector3 target = get_BonePositon(aimedPlayerNeck) - get_objectPosition(get_camera());
                            float aimAngle = Vector3::Angle(target, get_forward(get_transform(get_camera())) * 100);
                            if (aimAngle <= silentfov / 360) {
                                aimedBonePos = get_BonePositon(aimedPlayerNeck);
                                aimed = enemy;
                            }
                        }
                    } if (isBody) {
                        if (aimedPlayerSpine) {
                            Vector3 target = get_BonePositon(aimedPlayerHead) - get_objectPosition(get_camera());
                            float aimAngle = Vector3::Angle(target, get_forward(get_transform(get_camera())) * 100);
                            if (aimAngle <= silentfov / 360) {
                                aimedBonePos = get_BonePositon(aimedPlayerSpine);
                                aimed = enemy;
                            }
                        }
                    }
                }
			
			}*/
            

    }
   return old_PlayerController(player);
}
boolean godmode = false;
int (*olderr)(...);
int newerr(void *inst){
	if(godmode) return 9999;
	return olderr(inst);
}
float xValue, yValue;
boolean RCS = false;
/*
void (*old_GunController$$Update)(...);
void new_GunController$$Update(void *instance) {
    if (instance && RCS) {

        void *RecoilControl = * (void **)((uint64_t) instance + 0x9C);

        * (Vector2 *)((uint64_t) RecoilControl + 0x1C) = Vector2(xValue, yValue);
        * (Vector2 *)((uint64_t) RecoilControl + 0x14) = Vector2(xValue, yValue);
    }
  old_GunController$$Update(instance);
}
*/
bool (*old_vkapp)(...);
bool vkapp(void* inst) {
    if (inst != nullptr) {
        return true;
    }
    return old_vkapp(inst);
}
void* (*old_chamsBypass)(...);
void* chamsBypass(void* inst) {
}
void (*WorldToScreenPoint_Injected)(void *camera,Vec3 pos,int eye,Vec3 *out);
Vec3 WorldToScreenPoint(void *cam,Vec3 pos) {
    Vec3 loc;
    WorldToScreenPoint_Injected(cam,pos,2,&loc);
    return loc;
}

int silentDistance;
/*
void* (*old_CastHit)(Vector3 startPosition, Vector3 direction, void* parameters);
void* CastHit(Vector3 startPosition, Vector3 direction, void* parameters) {
    if (aimed && aimedBonePos != Vector3(0,0,0) && silentaim && get_photon(aimed)) {
        if (GetPlayerHealth(get_photon(aimed)) > 0 && get_bipedmap(aimed)) {
            void *aimedPlayerHead = *(void * *) ((uint64_t) get_bipedmap(aimed) + 0xC);
            void *aimedPlayerNeck = *(void * *) ((uint64_t) get_bipedmap(aimed) + 0x10);
            void *aimedPlayerSpine = *(void * *) ((uint64_t) get_bipedmap(aimed) + 0x14);
            if (isHead) {
                if (aimedPlayerHead) {
                    Vector3 target = get_BonePositon(aimedPlayerHead) - get_objectPosition(get_camera());
                    float aimAngle = Vector3::Angle(target, get_forward(get_transform(get_camera())) * 100);
                    if (aimAngle <= silentfov / 360.0f) {
                        float KDist = Vector3_2::Distance(get_playerPosition(me), get_playerPosition(aimed));
                        if (KDist < silentDistance) {
                            direction = Vector3::Normalized(aimedBonePos - startPosition);
                        }
                    } 
                }
            } if (isNeck) {
                if (aimedPlayerNeck) {
                    Vector3 target = get_BonePositon(aimedPlayerNeck) - get_objectPosition(get_camera());
                    float aimAngle = Vector3::Angle(target, get_forward(get_transform(get_camera())) * 100);
                    if (aimAngle <= silentfov / 360.0f) {
                        float KDist = Vector3_2::Distance(get_playerPosition(me), get_playerPosition(aimed));
                        if (KDist < silentDistance) {
                            direction = Vector3::Normalized(aimedBonePos - startPosition);
                        }
                    }
                }
            } if (isBody) {
                if (aimedPlayerSpine) {
                    Vector3 target = get_BonePositon(aimedPlayerSpine) - get_objectPosition(get_camera());
                    float aimAngle = Vector3::Angle(target, get_forward(get_transform(get_camera())) * 100);
                    if (aimAngle <= silentfov / 360.0f) {
                        float KDist = Vector3_2::Distance(get_playerPosition(me), get_playerPosition(aimed));
                        if (KDist < silentDistance) {
                            direction = Vector3::Normalized(aimedBonePos - startPosition);
                        }
                    }
                }
            }
        }
    }
    return old_CastHit(startPosition, direction, parameters);
}
*/

#define constructField(a,b,c) (*(a*) ((uint64_t) b + c))

void setShort(void* a,short b) {
    constructField(int, a, 0xC) = (int)b + constructField(int, a, 0x8);
}
void setFloat(void* a,float b) {
    constructField(float, a, 0xC) = b + constructField(float, a, 0x8);
}

short getShort(void* a) {
    return (short)(constructField(int, a, 0xC) - constructField(int, a, 0x8));
}
float getFloat(void* a) {
    return constructField(float, a, 0xC) - constructField(float, a, 0x8);
}
void ammoFunctions(void * a){
    if (ammo) {
        if (getShort(constructField(void*, a, 0x84)) < 1) setShort(constructField(void*, a, 0x84), 10);
        if (getShort(constructField(void*, a, 0x88)) < 1) setShort(constructField(void*, a, 0x88), 10);
    }
    if (firerate) {
        setFloat(constructField(void*, a, 0x70), 0);
    }
    if (recoil) {
        constructField(float, a, 0xF8) = 0;
        constructField(float, a, 0xFC) = 0;
        constructField(float, a, 0x100) = 0;

        auto rec = constructField(void*, a, 0x90);
        if (rec) {
            constructField(float, rec, 0x10) = 0;
            constructField(float, rec, 0x8) = 0;
            constructField(float, rec, 0xC) = 0;
            constructField(Vector2, rec, 0x14) = Vector2(0, 0);
        }
    }
}
void (*old_gunUpdate)(void* player);
void gunUpdate(void* a) {
    ammoFunctions(a);
    old_gunUpdate(a);
}
void (*old_gunUpdate1)(void* player);
void gunUpdate1(void* a) {
    ammoFunctions(a);
    old_gunUpdate1(a);
}
void (*old_gunUpdate2)(void* player);
void gunUpdate2(void* a) {
    ammoFunctions(a);
    old_gunUpdate2(a);
}
void (*old_gunUpdate3)(void* player);
void gunUpdate3(void* a) {
    ammoFunctions(a);
    old_gunUpdate3(a);
}

void (*old_gunUpdate4)(void* player);
void gunUpdate4(void* a) {
    ammoFunctions(a);
    old_gunUpdate4(a);
}

void (*old_gunUpdate5)(void* player);
void gunUpdate5(void* a) {
    ammoFunctions(a);
    old_gunUpdate5(a);
}

void (*old_gunUpdate6)(void* player);
void gunUpdate6(void* a) {
    ammoFunctions(a);
    old_gunUpdate6(a);
}
float (*old_wall)(void *, int, float);
float wall(void *a, int b, float c) {
    if (wallshoot) return 50;
    return old_wall(a,b,c);
}
float (*old_wall1)(void *, int, float);
float wall1(void *a, int b, float c) {
    if (wallshoot) return 50;
    return old_wall1(a,b,c);
}

float (*old_wall2)(void *, int, float);
float wall2(void *a, int b, float c) {
    if (wallshoot) return 50;
    return old_wall2(a,b,c);
}

float (*old_wall3)(void *, int, float);
float wall3(void *a, int b, float c) {
    if (wallshoot) return 50;
    return old_wall3(a,b,c);
}
float (*old_wall4)(void *, int, float);
float wall4(void *a, int b, float c) {
    if (wallshoot) return 50;
    return old_wall4(a,b,c);
}
int flyspeed = 50;
Vector3 (*getAxis)(void*);
void (*old_SetInputs)(void* a,Vector3 b);
void SetInputs(void* a,Vector3 b) {
    if (fly && a && me) {
        freez = true;
        float x = getAxis(a).x;
        float y = getAxis(a).y;

        Vector3 transfer = get_forward(get_transform(get_camera())) * y;
        transfer += get_right(get_transform(get_camera())) * x;

        set_pospl(get_transform(me), get_posspl(get_transform(me)) + transfer * get_deltaTime() * 50);
    }
    else freez = false;
    old_SetInputs(a,b);
}
boolean shotcrash = false;
float (*old_get_MoveSpeed)(void *instance);
float get_MoveSpeed(void *instance) {
    if (freez) {
        if (!shotcrash) return 0.01;
        else return 0;
    }
    return old_get_MoveSpeed(instance);
}

Vector3 (*old_Velo)(void* a);
Vector3 Velo(void* a) {

    return freez ? Vector3(0,0,0) : old_Velo(a);
}
void gravity(void* a){
    constructField(Vector3,a,0xA0) = Vector3(0,0,0);
    constructField(float,a,0x8) = 0;
    constructField(float,a,0xC) = 0;
    constructField(float,a,0x10) = 0;
    constructField(float,a,0x6C) = 0;
    constructField(float,a,0x70) = 0;
    constructField(float,a,0x74) = 0;
}
bool inAir;
bool (*old_AirJump)(void *instance);
bool AirJump(void *instance) {
    bool check = old_AirJump(instance);
    if (airjump || freez) {
        return true;
    }
    return check;
}
float (*old_Velo4)(void* a);
float Velo4(void* a) {
    if (freez) {
        gravity(a);
    }
    return freez ? 0 : old_Velo4(a);
}
float (*old_Velo5)(void* a);
float Velo5(void* a) {
    if (freez) {
        gravity(a);
    }
    return freez ? 0 : old_Velo5(a);
}
bool (*old_Velo2)(void* a);
bool Velo2(void* a) {
    return freez ? true : old_Velo2(a);
}
float (*old_jump4)(void* a);
float jump4(void* a) {
    if (freez) {
        gravity(a);
    }
    return old_jump4(a);
}
 
void (*get_position_injected)(void *transform, Vec3 *pos);
bool (*IsOwnerActive)(void *inst);
Vec3 GetPlayerPosition(void *player) {
    Vec3 loc;
    get_position_injected(get_transform(player),&loc);
    return loc;
}

struct enemy_t {
    void *object;
    int team;
    void *photon;
};

enemy_t *ne;
class ESPManager {
public:
    std::vector<enemy_t *> *enemies;
    ESPManager() {
        enemies = new std::vector<enemy_t *>();
    }

    bool isEnemyPresent(void *enemyObject) {
        for (std::vector<enemy_t *>::iterator it = enemies->begin(); it != enemies->end(); it++) {
            if ((*it)->object == enemyObject) {
                return true;
            }
        }
        return false;
    }

    void tryAddEnemy(void *enemyObject) {
        if (isEnemyPresent(enemyObject)) {
            return;
        }
        if (IsPlayerDied(GetPhoton(enemyObject))) {
            LOGD("PLAYER DIED");
            return;
        }
        enemy_t *newEnemy = new enemy_t();
        newEnemy->object = enemyObject;
        newEnemy->photon = GetPhoton(enemyObject);
        enemies->push_back(newEnemy);
    }

    void updateEnemies(void *enemyObject) {
        for (int i = 0; i < enemies->size(); i++) {
            enemy_t *current = (*enemies)[i];
            if (IsPlayerDied(GetPhoton(current->object))) {
                enemies->erase(enemies->begin() + i);
            }
            if (current->object == enemyObject) {
                current->photon = GetPhoton(enemyObject);
            }

        }
    }

    void removeEnemyGivenObject(void *enemyObject) {
        for (int i = 0; i < enemies->size(); i++) {
            if ((*enemies)[i]->object == enemyObject) {
                enemies->erase(enemies->begin() + i);
                return;
            }
        }
    }

};

void *GunInstance;
void (*_Get_Gun_Instance)(void *instance);
void Get_Gun_Instance(void *instance) {
   if (instance) {
        GunInstance = instance;
    }
    _Get_Gun_Instance(instance);
}

void (*_Camera_Update)(void *instance);
void Camera_Update(void *instance) {
        if (instance && RCS && GunInstance) {

                void *RecoilControl = * (void **)((uint64_t) GunInstance + 0x9C);

                * (Vector2 *)((uint64_t) instance + 0x90) = Vector2(xValue, yValue);
                * (Vector2 *)((uint64_t) instance + 0x98) = Vector2(xValue, yValue);
                * (Vector2 *)((uint64_t) RecoilControl + 0x1C) = Vector2(xValue, yValue);
                * (Vector2 *)((uint64_t) RecoilControl + 0x14) = Vector2(xValue, yValue);
          
    }
    _Camera_Update(instance);
}
bool contains(string in, string tofind) {
    if (strstr(in.c_str(), tofind.c_str())) {
        return true;
    }
    return false;
}
bool containsq(std::string in, std::string target) {
    if(strstr(in.c_str(), target.c_str())) {
        return true;
    }
    return false;
}
void (*_SetTexture)(void *instance, monoString* s, int value2);
void SetTexture(void *instance, monoString* s, int value2) {
	std::string std = s->get_string();
        if (instance) {
          containsq(std, "_Metallic");
		  value2 = 100; 
    }
    _SetTexture(instance, s, value2);
}
bool ESP;
ESPManager *espManager;
void * is_Mine = nullptr;

bool (*_isMine)(void *instance);
bool isMine(void *instance) {
    if (instance) {
        is_Mine = instance;

        if (ESP) {
            if (IsOwnerActive(instance)) {

                    void *Owner = GetPhoton(instance);
                    bool IsLocal = *(bool *) ((uint64_t) Owner + 0x14);
                    if (IsLocal) {
                        ne->object = instance;
                        ne->team = GetPlayerTeam(Owner);
                    }
                    if (!IsLocal && ne->object) {
                        espManager->tryAddEnemy(instance);
                    }
                    espManager->updateEnemies(instance);
                }

        }
    }
    return _isMine(instance);
}
std::string gen_random(const int len) {
    string id;
    static const char gsfid[] =
            "0123456789"
            "abcdefghijklmnopqrstuvwxyz";
    srand( (unsigned) time(nullptr) * getpid());
    id.reserve(len);
    for (int i = 0; i < len; ++i)
        id += gsfid[rand() % (sizeof(gsfid) - 1)];
    return id;
}
void start_thread(void * handle){
    //Init Hooks
 mono_address = 0x24D773C;
    setShader(S("_BumpMap"));
    LogShaders();
    Wallhack();
    ne = new enemy_t();
    espManager = new ESPManager();
    get_transform = (void *(*)(void *)) getAdresss((transformoffset));
    get_camera = (void *(*)()) getAdresss((getcameraoffset));
	get_main = (void *(*)()) getAdresss((getcameraoffset));
    get_bipedmap = (void *(*)(void *)) getAdresss((getbipedmapoffset));
    get_BonePositon = (Vector3 (*)(void *)) getAdresss((plpositionoffset));
    IsLocal = (bool (*)(void *)) getAdresss((islocaloffset));
    set_pospl = (void (*)(void *, Vector3)) getAdresss((setposition));
    set_poskill = (void (*)(void *, Vector3_2)) getAdresss((setpositioninj));
    WorldToScreenPoint_Injected = (void (*)(void *,Vec3 ,int ,Vec3 *)) getAdresss((worldtoscrinj));
    GetPlayerHealth = (int (*)(void *)) getAdresss((getplayerhealth));
    GetPlayerTeam = (int (*)(void *)) getAdresss((getplayerteam));
    get_rotation =(Quaternion (*)(void *))getAdresss(rotationoffset);
   getAxis = (Vector3 (*)(void*)) getAdresss(joystickaxis);
   get_deltaTime = (float(*)()) getAdresss(gettimeoffset);
    get_position_injected = (void (*)(void *, Vec3 *)) getAdresss((positionoffset));
	_get_position = (void (*)(void *, Vector3 *)) getAdresss((positionoffset));
    GetPhoton = (void *(*) (void*)) getAdresss((0x2933A70));//PhotonPlayer::getOwner
    IsOwnerActive = (bool (*) (void*)) getAdresss((0x2933A80));//PhotonPlayer::IsOwnerActive
    //PhotonPlayer::is_Mine
    DobbyHook((void *) getAdresss((0x2933B48)), (void *) isMine, (void **) &_isMine);
    //Hooks
    DobbyHook((void *) getAdresss((0x1CE04B0)), (void *) PlayerController, (void **) &old_PlayerController);
//	DobbyHook((void *) getAdresss((0x26DF6C8)), (void *) SetTexture, (void **) &_SetTexture);
    //HitCaster_Camera_Update
	//DobbyHook((void *) getAdresss((0x760654)), (void *) CastHit, (void **) &old_CastHit);
    //GunController0x25E4764_Get_Gun_Instance
	 DobbyHook((void *) getAdresss((0x1CCD7F0)), (void *) Camera_Update, (void **) &_Camera_Update);
	//  DobbyHook((void *) getAdresss((0x814794)), (void *) Get_Gun_Instance, (void **) &_Get_Gun_Instance);
	 	// DobbyHook((void *) getAdresss((0x3214F4C)), (void *) autowinct, (void **) &_autowinct);
	 DobbyHook((void *) getAdresss((0x2920F14)), (void *) newerr, (void **) &olderr);
  //  DobbyHook((void *) getAdresss((0x768248)), (void *) gunUpdate, (void **) &old_gunUpdate);
    //DobbyHook((void *) getAdresss((0x814794)), (void *) gunUpdate1, (void **) &old_gunUpdate1);
    //DobbyHook((void *) getAdresss((0x76A030)), (void *) gunUpdate2, (void **) &old_gunUpdate2)	DobbyHook((void *) getAdresss((0x814794)), (void *) new_GunController$$Update, (void **) &old_GunController$$Update);
 //   DobbyHook((void *) getAdresss((0x76A0D0)), (void *) gunUpdate3, (void **) &old_gunUpdate3);
  //  DobbyHook((void *) getAdresss((0x76B1A8)), (void *) gunUpdate4, (void **) &old_gunUpdate4);
//    DobbyHook((void *) getAdresss((0x76CA9C)), (void *) gunUpdate5, (void **) &old_gunUpdate5);
  //  DobbyHook((void *) getAdresss((0x76FE8C)), (void *) gunUpdate6, (void **) &old_gunUpdate6);
	///// DobbyHook((void *) getAdresss((0x2D072E0)), (void *) EquipedSkin, (void **) &old_EquipedSkin);
	// DobbyHook((void *) getAdresss((0x2D0B0A8)), (void *) EquipedKnife, (void **) &old_EquipedKnife);
	//   DobbyHook((void *) getAdresss((0x3077B40)), (void *) stick, (void **) &old_stick);
	//DobbyHook((void *) getAdresss((0x76FE8C)), (void *) Fire, (void **) &_Fire);
    //WallParameters перед хит кастером
  //  DobbyHook((void *) getAdresss((0x75D324)), (void *) wall, (void **) &old_wall);
    //DobbyHook((void *) getAdresss((0x75D1A0)), (void *) wall1, (void **) &old_wall1);
  //  DobbyHook((void *) getAdresss((0x75D49C)), (void *) wall2, (void **) &old_wall2);
 //   DobbyHook((void *) getAdresss((0x75D608)), (void *) wall3, (void **) &old_wall3);
 //   DobbyHook((void *) getAdresss((0x75D794)), (void *) wall4, (void **) &old_wall4);
    //getIsgrounded
 //   DobbyHook((void *) getAdresss((0x2510B24)), (void *) AirJump, (void **) &old_AirJump);
    //FloatingJoyStick
  //  DobbyHook( (void*) getAdresss((0x1E4FC8C)), (void*)SetInputs,(void **)&old_SetInputs);
    //CharacterController.Velocity
  //  DobbyHook((void *) getAdresss((0x282C910)), (void *) Velo, (void **) &old_Velo);
    //PlayerTranslationParameters
 //   DobbyHook((void *) getAdresss((0x21F2AA8)), (void *) get_MoveSpeed, (void **) &old_get_MoveSpeed);
    //над PlayerTranslationParameters флоаты на рандом тупо
   // DobbyHook((void *) getAdresss((0x21F1F64)), (void *) Velo4, (void **) &old_Velo4);
  //  DobbyHook((void *) getAdresss((0x21F20A8)), (void *) Velo5, (void **) &old_Velo5);
 //   DobbyHook((void *) getAdresss((0x991868)), (void *) jump4, (void **) &old_jump4);
    //VAuthVk::isSupported
	
  //  DobbyHook((void *) getAdresss((0x2E8D15C)), (void *) vkapp, (void **) &old_vkapp);
    //PlayerController slot:64
	
    DobbyHook((void *) getAdresss((0x1CDF93C)), (void *) chamsBypass, (void **) &old_chamsBypass);
}
bool visuals[50];
float visual_circle_size,visual_circle_stroke,visual_lined_size,visual_lined_stroke,visual_esp_line = 1,visual_esp_box = 1,visual_esp_boxth = 1,visual_esp_box_filedth = 1,visual_esp_box_filed = 1,visual_esp_skel = 1;
int visual_esp_line_type = 0;
ImColor Esp_Line = ImColor(255,0,0,229);
ImColor Esp_Box = ImColor(255,0,0,229);
ImColor Esp_Fled = ImColor(255,0,0,150);
ImColor Esp_Text = ImColor(255,255,255,229);
ImColor Esp_Dist = ImColor(255,255,255,229);
ImColor Esp_Filed = ImColor(255,0,0,150);
ImColor Esp_Skel = ImColor(0,255,255,150);
ImColor Esp_He= ImColor(0,255,0,150);
boolean ESPLine,ESPBox,ESPCornerBox,ESPGradientBox,ESPRoundBox,ESPSkeleton,ESPDistance,ESPHealth,ESPWeapon,ESPNick,ESPTeam,ESP360,SDIST;
ImColor Widgets_Theme =  ImColor(255,44,44);
ImColor Cross_Lined = Widgets_Theme;
ImColor Cross_Circle = Widgets_Theme;
ImColor Silent_Distance = ImColor(0,255,255,150);
ImColor Esp_Distance = ImColor(0,255,255,150);
#include "SBZWeaponStickerDatabase.h"

USBZWeaponStickerDatabase::USBZWeaponStickerDatabase() {
    FProperty* p_NativeClass = GetClass()->FindPropertyByName("NativeClass");
    *p_NativeClass->ContainerPtrToValuePtr<UClass*>(this) = USBZWeaponStickerDatabase::StaticClass();
}




#include "GlobalNamespace/StaticEnvironmentLights.hpp"

#include "Hooks.hpp"
#include "ModConfig.hpp"

MAKE_AUTO_HOOK_MATCH(RemoveStatic, &GlobalNamespace::StaticEnvironmentLights::Awake, void, GlobalNamespace::StaticEnvironmentLights *self){
  if(getModConfig().Enabled.GetValue() && getModConfig().Light.GetValue()){
    return;
  }else{
    RemoveStatic(self);
  };
}
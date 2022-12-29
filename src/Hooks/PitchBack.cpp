
#include "GlobalNamespace/LightSwitchEventEffect.hpp"

#include "Hooks.hpp"
#include "ModConfig.hpp"



MAKE_AUTO_HOOK_MATCH(PitchBlack, &GlobalNamespace::LightSwitchEventEffect::Start, void, GlobalNamespace::LightSwitchEventEffect *self){
  if(getModConfig().Enabled.GetValue() && getModConfig().Light.GetValue()){
    return;
  }else{
    PitchBlack(self);
  };
}

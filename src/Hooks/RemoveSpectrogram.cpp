
#include "GlobalNamespace/Spectrogram.hpp"

#include "Hooks.hpp"
#include "ModConfig.hpp"


MAKE_AUTO_HOOK_MATCH(RemoveSpectrogram, &GlobalNamespace::Spectrogram::Update, void, GlobalNamespace::Spectrogram *self){
  if(getModConfig().Enabled.GetValue() && getModConfig().Light.GetValue()){
    return;
  }else{
    RemoveSpectrogram(self);
  };
}
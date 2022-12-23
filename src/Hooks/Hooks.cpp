#include "GlobalNamespace/BeatmapData.hpp"
#include "GlobalNamespace/LightSwitchEventEffect.hpp"
#include "GlobalNamespace/StaticEnvironmentLights.hpp"
#include "GlobalNamespace/Spectrogram.hpp"
#include "Hooks.hpp"
#include "ModConfig.hpp"

MAKE_AUTO_HOOK_MATCH(SkipEvent, &GlobalNamespace::BeatmapData::InsertBeatmapEventData, void, GlobalNamespace::BeatmapData *self, GlobalNamespace::BeatmapEventData* beatmapEventData){
  if(getModConfig().Enabled.GetValue() && getModConfig().Light.GetValue()){
    return;
  }else{
    SkipEvent(self, beatmapEventData);
  };
}

MAKE_AUTO_HOOK_MATCH(RemoveStatic, &GlobalNamespace::StaticEnvironmentLights::Awake, void, GlobalNamespace::StaticEnvironmentLights *self){
  if(getModConfig().Enabled.GetValue() && getModConfig().Light.GetValue()){
    return;
  }else{
    RemoveStatic(self);
  };
}

MAKE_AUTO_HOOK_MATCH(PitchBlack, &GlobalNamespace::LightSwitchEventEffect::Start, void, GlobalNamespace::LightSwitchEventEffect *self){
  if(getModConfig().Enabled.GetValue() && getModConfig().Light.GetValue()){
    return;
  }else{
    PitchBlack(self);
  };
}

MAKE_AUTO_HOOK_MATCH(RemoveSpectrogram, &GlobalNamespace::Spectrogram::Update, void, GlobalNamespace::Spectrogram *self){
  if(getModConfig().Enabled.GetValue() && getModConfig().Light.GetValue()){
    return;
  }else{
    RemoveSpectrogram(self);
  };
}
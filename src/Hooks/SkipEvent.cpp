
#include "GlobalNamespace/BeatmapData.hpp"

#include "Hooks.hpp"
#include "ModConfig.hpp"

MAKE_AUTO_HOOK_MATCH(SkipEvent, &GlobalNamespace::BeatmapData::InsertBeatmapEventData, void, GlobalNamespace::BeatmapData *self, GlobalNamespace::BeatmapEventData* beatmapEventData){
  if(getModConfig().Enabled.GetValue() && getModConfig().Light.GetValue()){
    return;
  }else{
    SkipEvent(self, beatmapEventData);
  };
}
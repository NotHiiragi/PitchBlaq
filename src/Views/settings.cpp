#include "Views/settings.hpp"

#include "ModConfig.hpp"

DEFINE_TYPE(PitchBlaq::Views, Settings);

namespace PitchBlaq::Views {
    SafePtr<Settings> Settings::instance;
    Settings *Settings::get_instance()
    {
        if (!instance)
            instance = Settings::New_ctor();
        return instance.ptr();
    }

    void Settings::ctor()
    {

    }

    bool Settings::get_Enabled() {
        return getModConfig().Enabled.GetValue();
    }
    void Settings::set_Enabled(bool value) {
        getModConfig().Enabled.SetValue(value);
    }


    bool Settings::get_Light() {
        return getModConfig().Light.GetValue();
    }
    void Settings::set_Light(bool value) {
        getModConfig().Light.SetValue(value);
    }


    bool Settings::get_Spectrogram() {
        return getModConfig().Spectrogram.GetValue();
    }
    void Settings::set_Spectrogram(bool value) {
        getModConfig().Spectrogram.SetValue(value);
    }
}
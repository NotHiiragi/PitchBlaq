#pragma once
#include "HMUI/ViewController.hpp"

#include "custom-types/shared/macros.hpp"
#include "bsml/shared/macros.hpp"

#include "UnityEngine/Color.hpp"
using namespace UnityEngine;

DECLARE_CLASS_CODEGEN(PitchBlaq::Views, Settings, Il2CppObject,
    DECLARE_INSTANCE_FIELD(HMUI::ViewController*, settingsViewController);

    DECLARE_BSML_PROPERTY(bool, Enabled);

    DECLARE_BSML_PROPERTY(bool, Light);

    DECLARE_BSML_PROPERTY(bool, Spectrogram);

    DECLARE_CTOR(ctor);
    public:
        static Settings *get_instance();
    private:
        static SafePtr<Settings> instance;
)
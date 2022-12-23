#pragma once

#include "config-utils/shared/config-utils.hpp"

// Declare the mod config as "ModConfiguration" and declare all its values and functions.
DECLARE_CONFIG(ModConfig,
    // Declare "VariableA"
    CONFIG_VALUE(Enabled, bool, "Enabled", true);
    CONFIG_VALUE(Light, bool, "Light", true);
    CONFIG_VALUE(Spectrogram, bool, "Spectrogram", true);
)

/*
 *
 *    Copyright (c) 2019 Google LLC.
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

/**
 *    @file
 *      A trait data sink implementation for the Device Located Settings Trait.
 *
 */

#ifndef DEVICE_LOCATED_SETTINGS_TRAIT_DATA_SINK_H
#define DEVICE_LOCATED_SETTINGS_TRAIT_DATA_SINK_H

#include <Weave/Profiles/data-management/DataManagement.h>

class DeviceLocatedSettingsTraitDataSink : public nl::Weave::Profiles::DataManagement::TraitDataSink
{
public:
    DeviceLocatedSettingsTraitDataSink();

private:
    WEAVE_ERROR SetLeafData(nl::Weave::Profiles::DataManagement::PropertyPathHandle aLeafHandle,
                            nl::Weave::TLV::TLVReader & aReader);

    uint32_t mFixtureMajorType = 0;
    uint32_t mFixtureMinorType = 0;
};

#endif /* DEVICE_LOCATED_SETTINGS_TRAIT_DATA_SINK_H */
// SPDX-FileCopyrightText: Copyright 2018 suyu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

namespace Core {
class System;
}

namespace Service::SM {
class ServiceManager;
}

namespace Service::Audio {

void LoopProcess(Core::System& system);

} // namespace Service::Audio

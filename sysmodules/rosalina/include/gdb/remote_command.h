/*
*   This file is part of Luma3DS.
*   Copyright (C) 2016-2019 Aurora Wright, TuxSH
*
*   SPDX-License-Identifier: (MIT OR GPL-2.0-or-later)
*/

#pragma once

#include "gdb.h"

#define GDB_REMOTE_COMMAND_HANDLER(name)         GDB_HANDLER(RemoteCommand##name)
#define GDB_DECLARE_REMOTE_COMMAND_HANDLER(name) GDB_DECLARE_HANDLER(RemoteCommand##name)

GDB_DECLARE_REMOTE_COMMAND_HANDLER(SyncRequestInfo);
GDB_DECLARE_REMOTE_COMMAND_HANDLER(TranslateHandle);
GDB_DECLARE_REMOTE_COMMAND_HANDLER(GetMmuConfig);
GDB_DECLARE_REMOTE_COMMAND_HANDLER(GetMemRegions);
GDB_DECLARE_REMOTE_COMMAND_HANDLER(FlushCaches);
GDB_DECLARE_REMOTE_COMMAND_HANDLER(ToggleExternalMemoryAccess);

GDB_DECLARE_QUERY_HANDLER(Rcmd);

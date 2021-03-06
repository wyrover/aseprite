// Aseprite
// Copyright (C) 2001-2015  David Capello
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.

#ifndef APP_COMMANDS_CMD_SAVE_FILE_H_INCLUDED
#define APP_COMMANDS_CMD_SAVE_FILE_H_INCLUDED
#pragma once

#include "app/commands/command.h"

#include <string>

namespace app {
  class ContextReader;

  class SaveFileBaseCommand : public Command {
  public:
    SaveFileBaseCommand(const char* shortName, const char* friendlyName, CommandFlags flags);

    std::string selectedFilename() const {
      return m_selectedFilename;
    }

  protected:
    void onLoadParams(const Params& params) override;
    bool onEnabled(Context* context) override;

    void saveAsDialog(const ContextReader& reader, const char* dlgTitle, bool markAsSaved);

    std::string m_filename;
    std::string m_filenameFormat;
    std::string m_selectedFilename;
  };

} // namespace app

#endif

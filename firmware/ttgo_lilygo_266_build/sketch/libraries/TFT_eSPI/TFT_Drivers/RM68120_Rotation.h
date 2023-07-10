#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/TFT_eSPI/TFT_Drivers/RM68120_Rotation.h"

// This is the command sequence that rotates the RM68120 driver coordinate frame

  rotation = m % 4; // Limit the range of values to 0-3

  writecommand(TFT_MADCTL);
  switch (rotation) {
    case 0:
      writedata(TFT_MAD_COLOR_ORDER);
      _width  = _init_width;
      _height = _init_height;
      break;
    case 1:
      writedata(TFT_MAD_MV | TFT_MAD_MX | TFT_MAD_COLOR_ORDER);
      _width  = _init_height;
      _height = _init_width;
      break;
    case 2:
      writedata(TFT_MAD_MX | TFT_MAD_MY | TFT_MAD_COLOR_ORDER);
      _width  = _init_width;
      _height = _init_height;
      break;
    case 3:
      writedata(TFT_MAD_MV | TFT_MAD_MY | TFT_MAD_COLOR_ORDER);
      _width  = _init_height;
      _height = _init_width;
      break;

  }

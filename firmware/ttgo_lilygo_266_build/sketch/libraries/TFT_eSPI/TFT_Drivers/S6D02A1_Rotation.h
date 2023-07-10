#line 1 "/home/user/wip-LightningPiggy/sources/lightning-piggy/LightningPiggy-Lilygo-266/libraries/TFT_eSPI/TFT_Drivers/S6D02A1_Rotation.h"

// This is the command sequence that rotates the S6D02A1 driver coordinate frame

  rotation = m % 4;

  writecommand(TFT_MADCTL);
  switch (rotation) {
    case 0:
      writedata(TFT_MAD_MX | TFT_MAD_MY | TFT_MAD_BGR);
      _width  = _init_width;
      _height = _init_height;
      break;
    case 1:
      writedata(TFT_MAD_MV | TFT_MAD_MY | TFT_MAD_BGR);
      _width  = _init_height;
      _height = _init_width;
      break;
    case 2:
      writedata(TFT_MAD_BGR);
      _width  = _init_width;
      _height = _init_height;
      break;
    case 3:
      writedata(TFT_MAD_MX | TFT_MAD_MV | TFT_MAD_BGR);
      _width  = _init_height;
      _height = _init_width;
      break;
  }

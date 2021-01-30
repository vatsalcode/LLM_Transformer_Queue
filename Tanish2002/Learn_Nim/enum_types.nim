type
  CompassDirections = enum
    cdNorth, cdEast, cdSouth, cdWest

  Colors {.pure.} = enum
    Red = "FF0000", Green = (1, "00FF00"), Blue = "0000FF"

  OtherColors {.pure.} = enum
    Red = 0xFF0000, Orange = 0xFFA500, Yellow = 0xFFFF00

  Signals = enum
    sigQuit = 3, sigAbort = 6, sigKill = 9

# echo Red  # Error: ambiguous identifier: 'Red'
echo Colors.Red
echo OtherColors.Red
echo OtherColors.Orange, " ", Orange

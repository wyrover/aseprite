# Aseprite Document Library
# Copyright (C) 2001-2015 David Capello

add_library(doc-lib
  algo.cpp
  algorithm/flip_image.cpp
  algorithm/floodfill.cpp
  algorithm/polygon.cpp
  algorithm/resize_image.cpp
  algorithm/rotate.cpp
  algorithm/rotsprite.cpp
  algorithm/shrink_bounds.cpp
  blend.cpp
  brush.cpp
  cel.cpp
  cel_data.cpp
  cel_data_io.cpp
  cel_io.cpp
  cels_range.cpp
  color_scales.cpp
  compressed_image.cpp
  context.cpp
  conversion_she.cpp
  document.cpp
  documents.cpp
  file/col_file.cpp
  file/gpl_file.cpp
  file/pal_file.cpp
  frame_tag.cpp
  frame_tag_io.cpp
  frame_tags.cpp
  image.cpp
  image_io.cpp
  images_collector.cpp
  layer.cpp
  layer_index.cpp
  layer_io.cpp
  mask.cpp
  mask_io.cpp
  object.cpp
  object.cpp
  palette.cpp
  palette_io.cpp
  primitives.cpp
  remap.cpp
  rgbmap.cpp
  site.cpp
  sort_palette.cpp
  sprite.cpp
  sprites.cpp
  string_io.cpp
  subobjects_io.cpp)

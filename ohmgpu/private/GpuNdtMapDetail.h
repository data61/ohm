// Copyright (c) 2020
// Commonwealth Scientific and Industrial Research Organisation (CSIRO)
// ABN 41 687 119 230
//
// Author: Kazys Stepanas
#ifndef GPUNDTMAPDETAIL_H
#define GPUNDTMAPDETAIL_H

#include "OhmGpuConfig.h"

#include "private/GpuMapDetail.h"

#include <ohm/NdtMap.h>

namespace ohm
{
  struct GpuNdtMapDetail : public GpuMapDetail
  {
    ohm::NdtMap ndt_map;
    
    GpuNdtMapDetail(OccupancyMap *map, bool borrowed_map)
      : GpuMapDetail(map, borrowed_map)
      , ndt_map(map, true)
    {}
  };
}

#endif // GPUNDTMAPDETAIL_H

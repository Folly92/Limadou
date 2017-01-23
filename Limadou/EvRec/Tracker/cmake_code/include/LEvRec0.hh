#include "detector_const.hh"
#include "analysis_const.hh"

#ifndef __LEVREC0__
#define __LEVREC0__ 1

#include "RTypes.h"

class LEvRec0 {

public:
  LEvRec0();
  
  short strip[NCHAN];
  unsigned int trigger_index;
  unsigned int hepd_time;
  unsigned int event_index;
  unsigned short event_length;
  unsigned short pmt_high[NPMT];
  unsigned short pmt_low[NPMT];
  unsigned short rate_meter[NRATEMETER];
  bool trigger_flag[NPMT];
  unsigned int alive_time;
  unsigned int dead_time;
  
  /*
  Short_t strip[NCHAN];
  UInt_t trigger_index;
  UInt_t hepd_time;
  UInt_t event_index;
  UShort_t event_length;
  UShort_t pmt_high[NPMT];
  UShort_t pmt_low[NPMT];
  UShort_t rate_meter[NRATEMETER];
  Bool_t trigger_flag[NPMT];
  UInt_t alive_time;
  UInt_t dead_time;
  */
  void DumpStrip(void);
};


#endif

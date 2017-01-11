#include "detector_const.hh"
#include "analysis_const.hh"

#include "LEvent.hh"
#include <iostream>

LEvent::LEvent(){
  for(int i=0; i<NCHAN; ++i) strip[i]=0;
  trigger_index=0;
  hepd_time=0;
  event_index=0;
  event_length=0;
  for(int i=0; i<NPMT; ++i) {
    pmt_high[i]=0;
    pmt_low[i]=0;
    trigger_flag[i]=false;
  }
  for(int i=0; i<NRATEMETER; ++i) rate_meter[i]=0;
  alive_time=0;
  dead_time=0;
}



void LEvent::DumpStrip(void) {
    for(int i=0; i<NCHAN;++i) std::cout << strip[i] << " ";
    std::cout << std::endl;
    return;
  };

///
/// Description: Firmware headers
///
/// Implementation:
///    Concrete firmware implementations
///
/// \author: Jim Brooke - University of Bristol
///

//
//

#ifndef CaloStage2JetSumAlgorithmFirmware_H
#define CaloStage2JetSumAlgorithmFirmware_H

#include "L1Trigger/L1TCalorimeter/interface/CaloStage2JetSumAlgorithm.h"
#include "CondFormats/L1TObjects/interface/CaloParams.h"

namespace l1t {

  // Imp1 is for v1 and v2
  class CaloStage2JetSumAlgorithmFirmware1 : public CaloStage2JetSumAlgorithm {
  public:
    CaloStage2JetSumAlgorithmFirmware1();
    virtual ~CaloStage2JetSumAlgorithmFirmware1();
    virtual void processEvent(const std::vector<l1t::CaloTower> & towers,
			      std::vector<l1t::EtSum> & clusters);
  private:
    //    CaloParams const & m_params;
  };
  
}

#endif

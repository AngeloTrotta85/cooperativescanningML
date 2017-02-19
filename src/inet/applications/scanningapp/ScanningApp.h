//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#ifndef INET_APPLICATIONS_SCANNINGAPP_SCANNINGAPP_H_
#define INET_APPLICATIONS_SCANNINGAPP_SCANNINGAPP_H_

#include "inet/common/INETDefs.h"

#include "inet/applications/base/ApplicationBase.h"

namespace inet {

class INET_API ScanningApp : public ApplicationBase {

protected:
    virtual int numInitStages() const override { return NUM_INIT_STAGES; }
    virtual void initialize(int stage) override;
    virtual void handleMessageWhenUp(cMessage *msg) override;
    virtual void finish() override;

public:
    virtual ~ScanningApp();
};

} /* namespace inet */

#endif /* INET_APPLICATIONS_SCANNINGAPP_SCANNINGAPP_H_ */

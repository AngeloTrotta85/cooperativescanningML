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

#include "ScanningApp.h"

namespace inet {

Define_Module(ScanningApp);

void ScanningApp::initialize(int stage)
{
    ApplicationBase::initialize(stage);

    if (stage == INITSTAGE_LOCAL) {

    }
}

void ScanningApp::handleMessageWhenUp(cMessage *msg)
{
    if (msg->isSelfMessage()) {

    }
    else {
        throw cRuntimeError("Unrecognized message (%s)%s", msg->getClassName(), msg->getName());
    }
}

void ScanningApp::finish()
{
    ApplicationBase::finish();
}

ScanningApp::~ScanningApp() {
    // TODO Auto-generated destructor stub
}

} /* namespace inet */

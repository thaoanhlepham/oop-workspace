#include "USBConnection.h"

std::stack<int> USBConnection::ids({3, 2, 1});

USBConnection::USBConnection(int ID) : ID(ID) {}

USBConnection::~USBConnection() {
  ids.push(ID);
}

int USBConnection::get_id() const {
  return ID;
}

USBConnection* USBConnection::CreateUsbConnection() {
  if(!ids.empty()) {
    int new_ID = ids.top();
    ids.pop();
    return new USBConnection(new_ID);
  }
  return nullptr;
}

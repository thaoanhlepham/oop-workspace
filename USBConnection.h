#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <stack>

class USBConnection {
  private:
  int ID;
  // Private constructor
  USBConnection(int ID);

  public:
  ~USBConnection();
  int get_id() const;
  static USBConnection* CreateUsbConnection();

  private:
  static std::stack<int> ids;

};

#endif 
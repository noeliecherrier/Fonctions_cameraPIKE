#include "camera.h";


Camera::Camera() :
  cam(nullptr) {
    CameraPtrVector cameras;
    VimbaSystem &system = VimbaSystem :: GetInstance ();
    if ( VmbErrorSuccess == system.Startup () ) {
      if ( VmbErrorSuccess == system.GetCameras( cameras ) ) {
          cam = cameras[0];
      }
    }
}

Camera::~Camera(){
    delete cam;
}

bool Camera::openCamera(){
    if ( VmbErrorSuccess == (*iter)->Open( VmbAccessModeFull ) ){
        return true;
    }
    else return false;
}

bool Camera::closeCamera(){
    if ( VmbErrorSuccess == camera.Close () ){
        return true;
    }
    else return false;
}

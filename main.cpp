#include <iostream>
#include <cv.h>
#include <opencv/cvaux.h>
#include <opencv/cxcore.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;
//Abrir una imagen según sea su tamaño
int main(int argc, char *argv[])
{
    Mat image;
    if(!(argc > 1 && argc < 4)){
        cout << "\nDebe ingresar la ruta de la imagen a abrir asi: \n\t \"./imageOpener image.formato color(1) grises(0)\" o  \"./imageOpener image.formato\""<< endl;
    }else{
        cout << "\nAbriendo..." << argv[1] << endl;

        image = argc==3?imread(argv[1], atoi(argv[2])):imread(argv[1], 1);
        if(image.data){
            namedWindow("Imagen",WINDOW_NORMAL);
            imshow("Imagen", image);
            cout << "\nPresione una tecla para salir" << endl;
            cvWaitKey(0);
        }
        destroyAllWindows();
    }
    return 0;
}

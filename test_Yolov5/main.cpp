#include <iostream>
#include "Yolov5.h"
using namespace std;

int main()
{
    Yolov5* Yolo_v5;

    std::vector<std::string> class_list = Yolo_v5->load_class_list();

    cv::Mat frame= cv::imread("/home/cj/chaintwork/pcl/code_c++/test_Yolov5/araras.jpg");

    bool is_cuda = 0;

    cv::dnn::Net net;
    Yolo_v5->load_net(net, is_cuda);
    std::vector<Detection> output;
    Yolo_v5->detect(frame, net, output, class_list);
    Yolo_v5->Draw_Img(frame, output, class_list);

    cv::imwrite("q11qq.jpg",frame);

    cout << "Hello World!" << endl;
    return 0;
}

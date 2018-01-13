#include <iostream>
#include <math.h>
#define PI 3.14159265358979323846


// �������ͽṹ��
struct ComplexNumber
{
	float imag; //�鲿
	float real; //ʵ��
};

using namespace std;

// һάFFT
_declspec(dllexport) void FFT1D(ComplexNumber *arrayBuf, int n);
// һάIFFT
_declspec(dllexport) void IFFT1D(ComplexNumber *arrayBuf, int n);

// ��άFFT
_declspec(dllexport) void ImgFFT2D(unsigned char* imgBuf, int width, int height,unsigned char *imgBufOut,ComplexNumber *m_pFFTBuf);
// ��άIFFT
_declspec(dllexport) void ImgIFFT2D(unsigned char* imgBufOut, int width, int height,ComplexNumber *m_pFFTBuf);

// Ƶ��ƽ��
_declspec(dllexport) void FFTShift(int width,int height,ComplexNumber *m_pFFTBuf);

// ͼ���С����
_declspec(dllexport) void ImgSizeHandle(unsigned char *imgBuf, unsigned char *&imgBufout,int &width, int &height);

// ͼ���С��ԭ
_declspec(dllexport) void ResetImgSize(unsigned char *imgBuf, unsigned char *&imgBufout,int width, int height,int pWidth,int pHeight);

// Ƶ���ھ������
_declspec(dllexport) void FourierTrans(unsigned char **imgInput,double **mtfInput ,unsigned char **imgBufout,int pWidth,int pHeight);

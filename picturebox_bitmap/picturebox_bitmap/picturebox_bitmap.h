#pragma once
#include "opencv2\opencv.hpp"

namespace picturebox_bitmap {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cv;
	using namespace System::IO;
	
	Bitmap^  iplImageToBitmap(IplImage *);
	/// <summary>
	/// picturebox_bitmap 的摘要
	/// </summary>
	public ref class picturebox_bitmap : public System::Windows::Forms::Form
	{
	public:
		picturebox_bitmap(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~picturebox_bitmap()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Timer^  timer1;

	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(72, 75);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(270, 303);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(94, 30);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &picturebox_bitmap::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &picturebox_bitmap::timer1_Tick);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(390, 75);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(266, 303);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(713, 75);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(263, 303);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(256, 29);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &picturebox_bitmap::button2_Click);
			// 
			// picturebox_bitmap
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1005, 452);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"picturebox_bitmap";
			this->Text = L"picturebox_bitmap";
			this->Load += gcnew System::EventHandler(this, &picturebox_bitmap::picturebox_bitmap_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		Bitmap ^ imgg;
		Bitmap ^ imgg2;
		Bitmap ^ imgg3;
		Bitmap ^ imgg4;
		IplImage *img = 0;
		IplImage *img2 = 0;
		IplImage *img3= 0;
		IplImage* frame2 = 0;
		CvCapture *cap;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		Mat imgggg = imread("clp2.jpg");

		//Mat imgggg = cvarrToMat(img);

		img = &IplImage(imgggg);

		imgg = iplImageToBitmap(img);

		pictureBox1->Image = imgg;

		waitKey(0);

		/*cap = cvCaptureFromCAM(0);
		
		timer1->Start();*/
	
	}

	private: System::Void picturebox_bitmap_Load(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

			/*frame2 = cvQueryFrame(cap);
			Mat kkk = cvarrToMat(frame2);

			IplImage* kk = &IplImage(kkk);
			imgg4 = iplImageToBitmap(frame2);

			pictureBox1->Image = imgg4;*/


			/*Mat frame = cvarrToMat(frame2);

			Mat mask;
			Mat hsvImage;
			cvtColor(frame, hsvImage, COLOR_BGR2HSV);
			Scalar lowlimit = Scalar(35, 43, 46);
			Scalar upperlimit = Scalar(77, 255, 255);

			inRange(hsvImage, lowlimit, upperlimit, mask);

			img = &IplImage(frame);
			img2 = &IplImage(mask);
			img3 = &IplImage(hsvImage);

			imgg = iplImageToBitmap(img);
			imgg2 = iplImageToBitmap(img2);
			imgg3 = iplImageToBitmap(img3);

			pictureBox1->Image = imgg;
			pictureBox2->Image = imgg2;
			pictureBox3->Image = imgg3;*/
		
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Mat img = imread("clp2.bmp");
	Mat imggg2;
	GaussianBlur(img, imggg2, cvSize(3, 3), 0, 0);
	Mat output1, output2;
	/*Laplacian(imggg2, output1, CV_16S, 1);
	convertScaleAbs(output1, output2); Laplacian*/

	Mat imgx, imgy, adsimgx, adsimgy; 
	Sobel(imggg2, imgx, CV_16S, 1, 0, 3, 1, 0);
	convertScaleAbs(imgx, adsimgx);  //轉成CV_8U
	Sobel(imggg2, imgy, CV_16S, 0, 1, 3, 1, 0);
	convertScaleAbs(imgy, adsimgy);

	addWeighted(adsimgx, 0.5, adsimgy, 0.5, 0, output1);

	threshold(output1, output2, 50, 255, THRESH_BINARY_INV);

	/*Mat output3;
	Mat output4;*/

	/*resize(output1, output3, cvSize(pictureBox2->Width,pictureBox2->Height), 0, 0);
	resize(output2, output4, cvSize(pictureBox3->Width,pictureBox3->Height), 0, 0);*/

	img2 = &IplImage(output1);
	img3 = &IplImage(output2);

	imgg2 = gcnew Bitmap(img2->width, img2->height, img2->widthStep, System::Drawing::Imaging::PixelFormat::Format24bppRgb, (System::IntPtr)img2->imageData);
	imgg3 = gcnew Bitmap(img3->width, img2->height, img3->widthStep, System::Drawing::Imaging::PixelFormat::Format24bppRgb, (System::IntPtr)img3->imageData);


	pictureBox2->Image = imgg2;
	pictureBox3->Image = imgg3;

	waitKey(0);
	

	/*Mat frame = cvarrToMat(frame2);

	Mat mask;
	Mat hsvImage;
	cvtColor(frame, hsvImage, COLOR_BGR2HSV);
	Scalar lowlimit = Scalar(35, 43, 46);
	Scalar upperlimit = Scalar(77, 255, 255);

	inRange(hsvImage, lowlimit, upperlimit, mask);

	img = &IplImage(frame);
	img2 = &IplImage(mask);
	img3 = &IplImage(hsvImage);

	imgg = iplImageToBitmap(img);
	imgg2 = iplImageToBitmap(img2);
	imgg3 = iplImageToBitmap(img3);

	pictureBox1->Image = imgg;
	pictureBox2->Image = imgg2;
	pictureBox3->Image = imgg3;*/
}
		/* Bitmap^  iplImageToBitmap(IplImage *img)
		 {
			 if (img->depth == 8)
			 {
				 if (img->nChannels == 3) //iplImage為BGR格式
				 {
					 return gcnew System::Drawing::Bitmap(img->width, img->height, img->widthStep, System::Drawing::Imaging::PixelFormat::Format24bppRgb, (System::IntPtr)img->imageData);
				 }
				 else if (img->nChannels == 1) //iplImage為灰階格式
				 {
					 //為了符合Bitmap格式Format24bppRgb，解決方法之一為將單通道轉為3通道，變成BGR的格式。
					 int step = img->widthStep;
					 uchar* oData = (uchar*)img->imageData;

					 IplImage* nImg = cvCreateImage(cvSize(img->width, img->height), IPL_DEPTH_8U, 3);
					 int nStep = nImg->widthStep;
					 int nChannels = nImg->nChannels;
					 uchar* nData = (uchar *)nImg->imageData;
					 for (int j = 0; j <= img->height; j++)
					 {
						 for (int i = 0; i <= img->width; i++)
						 {
							 int counter = j*nStep + i*nChannels;
							 nData[counter + 0] = oData[j*step + i];
							 nData[counter + 1] = oData[j*step + i];
							 nData[counter + 2] = oData[j*step + i];
						 }
					 }
					 return gcnew System::Drawing::Bitmap(nImg->width, nImg->height, nImg->widthStep, System::Drawing::Imaging::PixelFormat::Format24bppRgb, (System::IntPtr)nImg->imageData);
				 }
			 }
		 }*/

};
}

#include <iostream>
#pragma once

namespace FirstControlWork {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для MathFunctionGraph
	/// </summary>
	public ref class MathFunctionGraph : public System::Windows::Forms::Form
	{
	public:
		MathFunctionGraph(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MathFunctionGraph()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private:
		System::Windows::Forms::Label^ label;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MathFunctionGraph::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// label
			// 
			this->label->AutoSize = true;
			this->label->Location = System::Drawing::Point(42, 48);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(206, 25);
			this->label->TabIndex = 0;
			this->label->Text = L"Заданная функция:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(47, 90);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(289, 129);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(384, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(219, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Шаг варьирования х:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(384, 128);
			this->label2->Name = L"label2";
			this->label2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label2->Size = System::Drawing::Size(305, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Интервал варьирования х от ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(751, 125);
			this->label3->Name = L"label3";
			this->label3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label3->Size = System::Drawing::Size(36, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"до";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(695, 122);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(50, 31);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"-5";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(793, 122);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(50, 31);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"5";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(438, 167);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(328, 52);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Построить график";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MathFunctionGraph::button1_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(47, 265);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(1001, 473);
			this->chart1->TabIndex = 8;
			this->chart1->Text = L"chart1";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(609, 87);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 31);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"0,01";
			// 
			// MathFunctionGraph
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1105, 829);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label);
			this->Name = L"MathFunctionGraph";
			this->Text = L"MathFunctionGraph";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double step = Convert::ToDouble(textBox3->Text);
		double minIntervalValue = Convert::ToDouble(textBox1->Text);
		double maxIntervalValue = Convert::ToDouble(textBox2->Text);

		chart1->Series->Clear();

		chart1->Series->Add("Часть 1");
		chart1->Series["Часть 1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
		
		chart1->Series->Add("Часть 2");
		chart1->Series["Часть 2"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;

		double y;

		for (double x = minIntervalValue; x <= maxIntervalValue; x += step) {
			y = (2 * x + 1) / (2 * x * x + x);
			if (x < 0 && y > -55) {
				chart1->Series["Часть 1"]->Points->AddXY(x, y);
			}
			if (x > 0 && y < 55) {
				chart1->Series["Часть 2"]->Points->AddXY(x, y);
			}
		}
	}
};
}

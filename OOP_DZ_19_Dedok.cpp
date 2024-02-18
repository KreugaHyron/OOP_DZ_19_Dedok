#include <iostream>
using namespace std;
class Processor {
public:
	Processor(const string& model) : model (model) {}
	string getModel() const {
		return model;
	}
private:
	string model;
};
class RAM {
public:
	RAM(int sizeGB) : sizeGB(sizeGB) {}
	int getSizeGB() const {
		return sizeGB;
	}
private:
	int sizeGB;
};
class Mouse {
public:
	Mouse(const string& brand) : brand(brand) {}
	string getBrand() const {
		return brand;
	}
private:
	string brand;
};
class Webcam {
public:
	Webcam(const string& resolution) : resolution(resolution) {}
	string getResolution() const {
		return resolution;
	}
private:
	string resolution;
};
class Printer {	
public:
	Printer(const string& model) : model(model) {}
	string getModel() const {
		return model;
	}
private:
	string model;
};
class GraphicsCard {
public:
	GraphicsCard(const string& model) : model(model) {}
	string getModel() const {
		return model;
	}
private:
	string model;
};
class Laptop {	
public:
	Laptop(const string& model, const Processor& proc, const RAM& ram, const Mouse& mouse, const Webcam& webcam, const Printer& printer, const GraphicsCard& graphicsCard)
		: model(model), proc(proc), ram(ram), mouse(mouse), webcam(webcam), printer(printer), graphicsCard(graphicsCard) {}
	void printInfo() const {
		cout << "Model: " << model << endl 
			<< "Processor: " << proc.getModel() << endl
			<< "RAM: " << ram.getSizeGB() << " GB" << endl
			<< "Mouse: " << mouse.getBrand() << endl
			<< "Webcam: " << webcam.getResolution() << endl
			<< "Printer: " << printer.getModel() << endl
			<< "Graphics Card: " << graphicsCard.getModel() << endl;
	}
private:
	string model;
	Processor proc;
	RAM ram;
	Mouse mouse;
	Webcam webcam;
	Printer printer;
	GraphicsCard graphicsCard;
};
int main()
{
	Processor proc("Intel Core i7");
	RAM ram(16);
	Mouse mouse("Logitech");
	Webcam webcam("1080p");
	Printer printer("HP");
	GraphicsCard graphicsCard("NVIDIA GeForce RTX 3080");
	Laptop laptop("Dell", proc, ram, mouse, webcam, printer, graphicsCard);
	laptop.printInfo();
	return 0;
}

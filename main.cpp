#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QWidget win;
	win.setWindowTitle("Maya Act");
	win.show();
	return app.exec();
}

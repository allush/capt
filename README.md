#Capt
#####Simple crossplatform tool for creating snapshots of websites.

#### Install Capt
Use Qt4|5 library (needs core, gui, webkit, webkitwidgets modules) to build it :
- qmake
- make

#### Install Qt
- Qt4 libs: ~ sudo apt-get install libqt4-dev libqt4-webkit g++
- Qt5 libs: ~ sudo apt-get install libqt5core5 libqt5webkit5-dev libqt5gui5 g++

#### Usage
./capt --url=http://google.com --out=google.png (available formats: png, jpg, tiff)

#### Usage without X server
To run on server machines use xvfb-run command:
xvfb-run -s '-screen 0, 1280x1024x24' ./capt --url=http://google.com --out=google.png


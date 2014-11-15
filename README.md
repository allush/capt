Simple crossplatform tool for creating snapshots of websites.

#### Install
Use Qt5 library (needs core, gui, webkitwidgets modules) to build it :
- qmake
- make

#### Usage

./capt --url=http://google.com --out=google.png

#### Available formats

png
jpg
tiff

---

To run on server machines use xvfb-run command:

xvfb-run -s '-screen 0, 1280x1024x24' ./capt --url=http://google.com --out=google.png


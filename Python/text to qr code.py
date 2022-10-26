import pyqrcode
from PIL import Image
import png
s=input("Enter the text to generate Qr code:")
a=pyqrcode.create(s)
a.svg("myqr.svg",scale=9)
a.png("myqr.png",scale=8)
im=Image.open(r"myqr.png")
im.show()
import os
import qrcode

img = qrcode.make("https://cs50.harvard.edu/python/2025/")
img.save("qr.png", "PNG")

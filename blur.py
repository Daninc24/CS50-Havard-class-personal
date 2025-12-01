from PIL import Image, ImageFilter

before = Image.open("havard bridge.jpg")

after = before.filter(ImageFilter.BoxBlur(10))
after.save("out.jpg")
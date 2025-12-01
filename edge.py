from PIL import Image, ImageFilter

before = Image.open("after.jpg")
after = before.filter(ImageFilter.FIND_EDGES)
after.save("after_edges.jpg")
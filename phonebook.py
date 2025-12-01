import csv
name = input("Enter name: ")
phone = input("Enter phone number: ")

with open("phonebook.csv", "a") as file:
    writer = csv.DictWriter(file , fieldnames=["Name", "Phone"])
    writer.writerow({"Name": name, "Phone": phone})
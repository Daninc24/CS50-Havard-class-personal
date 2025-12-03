from cs50 import SQL

db = SQL("sqlite:///followup.db")

followup = input("Enter follow-up question: ")

rows = db.execute("SELECT * FROM followup2 WHERE email = 'sent'")

for row in rows:
    print(f"Answer: {row['answer']}")

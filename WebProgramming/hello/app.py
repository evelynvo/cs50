import os
import smtplib
from flask import Flask, render_template, request, redirect

app = Flask(__name__)


@app.route("/")
def index():
    return render_template("index.html")


students = []


@app.route("/registrants")
def registrants():
    return render_template("registered.html", students=students)


@app.route("/register", methods=["POST"])
def register():
    email = request.form.get("email")
    name = request.form.get("name")
    dorm = request.form.get("dorm")

    if not name or not dorm or not email:
        return render_template("failure.html")

    messaage = "You are registered!"
    server = smtplib.SMTP("smtp.gmail.com", 587)
    server.starttls()
    server.login("yourihdx", os.getenv("blablabla*"))
    server.sendmail("yourihdx@gmail.com", email, message)
    return render_template("success.html")

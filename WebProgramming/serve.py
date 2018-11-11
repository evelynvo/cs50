from http.server import BaseHTTPRequestHandler, HTTPServer

class HTTPServer_RequestHandler(BaseHTTPRequestHandler):
    
    def do_GET(self):
        
        self.send_response(200)
        self.send_header("Content-type:", "text/html")
        self.end_headers()
    
        self.wfile.write(b"<!DOCTYPE html>")
        self.wfile.write(b"<html lang='en'>")
        self.wfile.write(b"<head>")
        self.wfile.write(b"<title>Hello, title!</title></head>")
        self.wfile.write(b"<body>")
        self.wfile.write(b"<h1>Hello, World!</h1>")
        self.wfile.write(b"<style>body {font-family: sans-serif, Arial, Consolas; }</style>")
        self.wfile.write(b"</body></html>")

port = 8080
server_address = ("127.0.0.1", port)
httpd = HTTPServer(server_address, HTTPServer_RequestHandler)

httpd.serve_forever()

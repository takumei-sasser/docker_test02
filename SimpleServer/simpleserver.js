var http = require('http');
var json = require('./sample.json');

// let json2 = json.filter(j => {
//     return j.color == "red";
// });

// for (const key in json2) {
//     console.log(key, json2[key]);
// }

var server = http.createServer(function(request,response){
    
    if (request.method == 'GET') {
        console.log("GETうけとり");
        response.writeHead(200, { 'Content-Type': 'text/html' });
        var html = require('fs').readFileSync('index.html');
        response.end(html);
    } else {
        console.log(request.method + "うけとり");

        var data = '';
        request.on('data', function (chunk) { data += chunk }).on('end', function () {
            console.log(data);
        });

        response.writeHead(200, { 'Content-Type': 'application/json; charset=utf-8' });
        response.end(JSON.stringify(json));
    }
})
server.listen(8080);
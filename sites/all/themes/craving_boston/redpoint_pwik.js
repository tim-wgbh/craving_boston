var _paq = _paq || [];
(function(){ var u=(("https:" == document.location.protocol) ? "https://rpwt.rphelios.net/wgbhwt/" : "http://rpwt.rphelios.net/wgbhwt/");
var urlParams = {};
var parts = window.location.href.replace(/[?&]+([^=&]+)=([^&]*)/gi, function (m, key, value) {
urlParams[key] = value;
});
var cId = urlParams["cid"];
var exId = urlParams["exid"];
var rpiClientID = urlParams["clid"];
 
_paq.push(['setSiteId', 1]);
_paq.push(['setTrackerUrl', u+'piwik.php']);
//_paq.push(['setDocumentTitle', 'Test Landing Page']);
if (cId != undefined) {
_paq.push(['setCustomVariable', 2, "RPContactID", cId, scope = "visit"]);
}
if (exId != undefined) {
_paq.push(['setCustomVariable', 1, "ChannelExecutionID", exId, scope = "visit"]);
}
if (rpiClientID != undefined) {
_paq.push(['setCustomVariable', 3, "RPClientID", rpiClientID, scope = "visit"]);
}
_paq.push(['trackPageView']);
_paq.push(['enableLinkTracking']);
var d=document, g=d.createElement('script'), s=d.getElementsByTagName('script')[0]; g.type='text/javascript'; g.defer=true; g.async=true; g.src=u+'piwik.js';
s.parentNode.insertBefore(g,s); })();
 
var visitor_id;
_paq.push([function () {
visitor_id = this.getVisitorId();
if (visitor_id != undefined) {
var hiddenElems = document.getElementsByName('rpiTrkPiwikVisitorID');
for (var i = 0; i < hiddenElems.length; i++) {
hiddenElems[i].value = visitor_id;
}
}
} ]);

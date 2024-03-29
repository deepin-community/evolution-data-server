/*
 * This library is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

/* BE WARY of editing this file with emacs.
 * Otherwise it might be smart and try to re-encode everything, which
 * you really do not want
*/

static struct _a {
	gint count;
	const gchar *addr;
	const gchar *utf8;	/* The utf8 in this table was generated by
				 * Camel itself.  As a result I'm making the
				 * assumption it was right when it was created.
				 * It also depends on the format of ::format (),
				 * which is likely to change, to handle other
				 * bugs!*/
} test_address[] = {
	{ 1, "\"=?ISO-8859-1?Q?David_Guti=E9rrez_Magallanes?=\" <david@iiia.csic.es>", "David Gutiérrez Magallanes <david@iiia.csic.es>" },
	{ 1, "\"=?iso-8859-1?Q?Jos=E9?= Antonio Milke G.\" <gerencia@ovoplus.com>", "José Antonio Milke G. <gerencia@ovoplus.com>" },
	{ 1, "\"=?iso-8859-2?Q?Hi-Fi_Internert_market_=3D_1.Virtu=E1ln=ED_Internetov=E9_H?= =?iso-8859-2?Q?i-Fi_Studio?=\" <hifimarket@atlas.cz>", "Hi-Fi Internert market = 1.Virtuální Internetové Hi-Fi Studio <hifimarket@atlas.cz>" },
	{ 3, "\"James M. Cape\" <jcape@jcinteractive.com>, =?iso-8859-1?Q?Joaqu=EDn_Cuenca_Abela?= <cuenca@ie2.u-psud.fr>, gnome-hackers@nuclecu.unam.mx", "James M. Cape <jcape@jcinteractive.com>, Joaquín Cuenca Abela <cuenca@ie2.u-psud.fr>, gnome-hackers@nuclecu.unam.mx" },
	{ 1, "=?ISO-8859-1?Q?David_Guti=E9rrez_Magallanes?= <david@iiia.csic.es>", "David Gutiérrez Magallanes <david@iiia.csic.es>" },
	{ 1, "=?ISO-8859-2?Q?Tomasz_K=B3oczko?= <kloczek@rudy.mif.pg.gda.pl>", "Tomasz Kłoczko <kloczek@rudy.mif.pg.gda.pl>" },
	{ 1, "=?ISO-8859-2?Q?Vladim=EDr_Solnick=FD?= <vs@utia.cas.cz>", "Vladimír Solnický <vs@utia.cas.cz>" },
	{ 1, "=?iso-8859-1?Q?=22S=F6rensen=2C_Daniel=22?= <dasar@wmdata.com>", "\"Sörensen, Daniel\" <dasar@wmdata.com>" },
	{ 1, "=?iso-8859-1?Q?=C1=C2=AAQ=A7=CA?= <dennys@iim.nctu.edu.tw>", "ÁÂªQ§Ê <dennys@iim.nctu.edu.tw>" },
	{ 1, "=?iso-8859-1?Q?=C1=C2=AAQ=A7=CA?= <dennys@news.iim.nctu.edu.tw>", "ÁÂªQ§Ê <dennys@news.iim.nctu.edu.tw>" },
	{ 1, "=?iso-8859-1?Q?=C1kos?= Valentinyi <A.Valentinyi@soton.ac.uk>", "Ákos Valentinyi <A.Valentinyi@soton.ac.uk>" },
	{ 1, "=?iso-8859-1?Q?Joaqu=EDn?= Cuenca Abela <cuenca@ie2.u-psud.fr>", "Joaquín Cuenca Abela <cuenca@ie2.u-psud.fr>" },
	{ 2, "=?iso-8859-1?Q?Joaqu=EDn?= Cuenca Abela <cuenca@ie2.u-psud.fr>, gnome-hackers@nuclecu.unam.mx", "Joaquín Cuenca Abela <cuenca@ie2.u-psud.fr>, gnome-hackers@nuclecu.unam.mx" },
	{ 1, "=?iso-8859-1?Q?Joaqu=EDn_Cuenca_Abela?= <cuenca@celium.net>", "Joaquín Cuenca Abela <cuenca@celium.net>" },
	{ 1, "=?iso-8859-1?Q?Juantom=E1s=20Garc=EDa?= <juantomas@lared.es>", "Juantomás García <juantomas@lared.es>" },
	{ 1, "=?iso-8859-1?Q?Kenneth_ll=E9phaane_Christiansen?= <kenneth@ripen.dk>", "Kenneth lléphaane Christiansen <kenneth@ripen.dk>" },
	{ 1, "=?iso-8859-1?Q?Kjell_Tage_=D8hman?= <tage@ohman.no>", "Kjell Tage Øhman <tage@ohman.no>" },
	{ 1, "=?iso-8859-1?Q?Martin_Norb=E4ck?= <d95mback@dtek.chalmers.se>", "Martin Norbäck <d95mback@dtek.chalmers.se>" },
	{ 1, "=?iso-8859-1?Q?P=E5llen?= <pollen@astrakan.hig.se>", "Pållen <pollen@astrakan.hig.se>" },
	{ 1, "=?iso-8859-1?Q?Ville_P=E4tsi?= <drc@gnu.org>", "Ville Pätsi <drc@gnu.org>" },
	{ 1, "=?iso-8859-1?q?Joaqu=EDn?= Cuenca Abela <cuenca@celium.net>", "Joaquín Cuenca Abela <cuenca@celium.net>" },
	{ 1, "=?iso-8859-2?Q?Dra=BEen_Ka=E8ar?= <dave@srce.hr>", "Dražen Kačar <dave@srce.hr>" },
        /* yep this is right, this isn't valid so doesn't decode at all */
	/* { 1, "=?windows-1250?Q? \"Jaka Mo=E8nik\" ?= <jaka.mocnik@kiss.uni-lj.si>", "=?windows-1250?Q? Jaka Mo=E8nik ?= <jaka.mocnik@kiss.uni-lj.si>" }, */
	{ 3, "George <jirka@5z.com>, Juantomas =?ISO-8859-1?Q?Garc=C3=83=C2=ADa?= <juantomas@lared.es>, gnome-hackers@gnome.org", "George <jirka@5z.com>, Juantomas GarcÃÂ­a <juantomas@lared.es>, gnome-hackers@gnome.org" },
	{ 7, "Jon Trowbridge <trow@emccta.com>, gnome-1.4-list@gnome.org, gnome-devel-list@gnome.org, gnome-hackers@gnome.org, Dom Lachowicz <cinamod@hotmail.com>, =?iso-8859-1?Q?Joaqu=EDn_Cuenca_Abela?= <cuenca@celium.net>, sam th <sam@uchicago.edu>", "Jon Trowbridge <trow@emccta.com>, gnome-1.4-list@gnome.org, gnome-devel-list@gnome.org, gnome-hackers@gnome.org, Dom Lachowicz <cinamod@hotmail.com>, Joaquín Cuenca Abela <cuenca@celium.net>, sam th <sam@uchicago.edu>" },
	{ 6, "Jon Trowbridge <trow@emccta.com>, gnome-1.4-list@gnome.org, gnome-devel-list@gnome.org, gnome-hackers@gnome.org, Dom Lachowicz <cinamod@hotmail.com>, =?iso-8859-1?Q?Joaqu=EDn_Cuenca_Abela?= <cuenca@ie2.u-psud.fr>", "Jon Trowbridge <trow@emccta.com>, gnome-1.4-list@gnome.org, gnome-devel-list@gnome.org, gnome-hackers@gnome.org, Dom Lachowicz <cinamod@hotmail.com>, Joaquín Cuenca Abela <cuenca@ie2.u-psud.fr>" },
	{ 1, "Kai =?iso-8859-1?Q?Gro=DFjohann?= <Kai.Grossjohann@CS.Uni-Dortmund.DE>", "Kai Großjohann <Kai.Grossjohann@CS.Uni-Dortmund.DE>" },
	{ 1, "Kai.Grossjohann@CS.Uni-Dortmund.DE (Kai =?iso-8859-1?q?Gro=DFjohann?=)", "Kai Großjohann <Kai.Grossjohann@CS.Uni-Dortmund.DE>" },
	{ 1, "Rickard =?iso-8859-1?Q?Nordstr=F6m?= <rzi@ebox.tninet.se>", "Rickard Nordström <rzi@ebox.tninet.se>" },
	{ 1, "Tomasz =?iso-8859-2?q?K=B3oczko?= <kloczek@rudy.mif.pg.gda.pl>", "Tomasz Kłoczko <kloczek@rudy.mif.pg.gda.pl>" },
	{ 1, "VALCKE =?iso-8859-1?Q?C=E9dric?= <cvalcke@freesurf.fr>", "VALCKE Cédric <cvalcke@freesurf.fr>" },
	{ 1, "Ville =?iso-8859-1?q?P=E4tsi?= <drc@gnu.org>", "Ville Pätsi <drc@gnu.org>" },
	{ 1, "david@iiia.csic.es (=?ISO-8859-1?Q?David_Guti=E9rrez_Magallanes?=)", "David Gutiérrez Magallanes <david@iiia.csic.es>" },
	{ 1, "kloczek@rudy.mif.pg.gda.pl (=?ISO-8859-2?Q?Tomasz_K=B3oczko?=)", "Tomasz Kłoczko <kloczek@rudy.mif.pg.gda.pl>" },
	{ 1, "lassehp@imv.aau.dk (Lasse =?ISO-8859-1?Q?Hiller=F8e?= Petersen)", "Lasse Hillerøe Petersen <lassehp@imv.aau.dk>" },
	{ 1, "ysato@etl.go.jp (Yutaka Sato =?ISO-2022-JP?B?GyRAOjRGI0stGyhK?=)", "Yutaka Sato 佐藤豊 <ysato@etl.go.jp>" },
};

static struct _l {
    const gchar *type;
    const gchar *line;
} test_lines[] = {
	/* commented out unsupported charsets - FIXME: camel should somehow handle this, although it can't really of course */
	/*{ "windows-1251", "\xc5\xe4\xe8\xed \xe0\xef\xeb\xe5\xf2 \xed\xe5 \xee\xf2\xe3\xee\xe2\xe0\xf0\xff \xed\xe0 \xe7\xe0\xff\xe2\xea\xe0 \xe7\xe0 \xe7\xe0\xef\xe8\xf1.\n\xc4\xe0 \xe3\xee \xef\xf0\xe5\xec\xe0\xf5\xed\xe0 \xeb\xe8 \xe8\xeb\xe8 \xe4\xe0 \xef\xee\xf7\xe0\xea\xe0\xec?" },*/
	{ "iso-8859-1", "Omple les miniatures de la finestra amb contingut de la pantalla" },
	{ "ISO-8859-2", "Spr\xe1" "vce oken h\xfd" "be s okrajem okna\n(AfterStep, Enlightenment, FVWM, IceWM, Sawmill)" },
	{ "ISO-8859-1", "Vinduesh\xe5ndtering flytter dekorationsvindue istedet\n(AfterStep, Enlightenment, FVWM, IceWM, Sawfish)" },
	{ "ISO-8859-1", "Vorschaubilder der Fenster mit dem Bildschirminhalt ausf\xfc" "llen" },
	{ "iso-8859-7", "\xc5\xec\xf6\xdc\xed\xe9\xf3\xe7 \xe5\xf1\xe3\xe1\xf3\xe9\xfe\xed \xf0\xef\xf5 \xe4\xe5 \xf6\xe1\xdf\xed\xef\xed\xf4\xe1\xe9 \xf3\xf4\xe7 \xeb\xdf\xf3\xf4\xe1 \xf0\xe1\xf1\xe1\xe8\xfd\xf1\xf9\xed (\xd0\xc1\xd1\xc1\xca\xc1\xcc\xd8\xc7" "-\xcb\xc9\xd3\xd4\xc1\xd0\xc1\xd1\xc1\xc8\xd5\xd1\xd9\xcd)" },
	{ "iso-8859-1", "You've chosen to disable the startup hint.\nTo re-enable it, choose \"Startup Hint\"\nin the GNOME Control Centre" },
	{ "iso-8859-1", "El aplique de reloj muestra en su panel la fecha y la hora de forma simple \ny ligero " },
	{ "iso-8859-1", "Applet ei vasta salvestusk\xe4" "sule.\nKas peaks ta niisama sulgema, v\xf5" "i veel ootama?" },
	{ "iso-8859-1", "Lehio kudeatzaileak lehioaren dekorazaioa mugiarazten\n(AfterStep, Enlightenment, FVWM, IceWM, Sawmill)" },
	{ "iso-8859-15", "N\xe4" "yt\xe4 sovellukset, joiden ikkunoista on n\xe4" "kyvill\xe4 vain otsikkopalkki" },
	{ "ISO-8859-1", "Afficher les t\xe2" "ches qui ne sont pas dans la liste des fen\xea" "tres" },
	{ "iso-8859-1", "N\xed" "l applet ag tabhair freagra ar iarratas s\xe1" "bh\xe1" "il.\nBain amach an applet n\xf3 lean ar f\xe1" "nacht?" },
	{ "iso-8859-1", "Amosa-las tarefas agochadas da lista de fiestras (SKIP-WINLIST)" },
	{ "iso-8859-2", "Az ablakkezel\xf5 a dekor\xe1" "ci\xf3" "t mozgassa az ablak helyett\n(AfterStep, Enlightenment, FVWM, IceWM, SawMill)" },
	{ "iso-8859-1", "Riempi la finestra delle anteprime con il contenuto dello schermo" },
	{ "euc-jp", "\xa5\xa6\xa5\xa4\xa5\xf3\xa5\xc9\xa5\xa6\xa5\xde\xa5\xcd\xa1\xbc\xa5\xb8\xa5\xe3\xa4\xcf\xbe\xfe\xa4\xea\xa5\xa6\xa5\xa4\xa5\xf3\xa5\xc9\xa5\xa6\xa4\xf2\xc6\xb0\xa4\xab\xa4\xb9\n(AfterStep, Enlightenment, FVWM, IceWM, Sawfish)" },
	{ "euc-kr", "\xc3\xa2 \xb0\xfc\xb8\xae\xc0\xda\xb0\xa1 \xb2\xd9\xb9\xce \xc3\xa2 \xb4\xeb\xbd\xc5 \xc0\xcc\xb5\xbf\n(AfterStep, Enlightenment, FVWM, IceWM, Sawmill)" },
	{ "iso-8859-13", "Priedas neatsakin\xeb" "ja \xe1 pra\xf0" "ym\xe0 i\xf0" "sisaugoti.\nPa\xf0" "alinti pried\xe0 ar laukti toliau?" },
	{ "iso-8859-1", "Window manager verplaatst dekoratie\n(AfterStep, Enlightenment, FVWM, IceWM, Sawmill)" },
	{ "iso-8859-1", "Vindush\xe5" "ndtereren flytter dekorasjonsvinduet i stedet\n(AfterStep, Enlightenment, FVWM, IceWM, Sawfish)" },
	{ "iso-8859-2", "Przemieszczanie dekoracji zamiast okna\n(AfterStep, Enlightenment, FVWM, IceWM, Sawmill)" },
	{ "iso-8859-1", "Este programa \xe9 respons\xe1vel por executar outras aplica\xe7\xf5" "es, embeber pequenos applets, a paz no mundo e crashes aleat\xf3" "rios do X." },
	{ "iso-8859-1", "Mostrar tarefas que se escondem da lista de janelas (SKIP-WINLIST)" },
	{ "koi8-r", "\xf7\xd9\xd3\xcf\xd4\xc1 \xd2\xc1\xc2\xcf\xde\xc5\xc7\xcf \xd3\xd4\xcf\xcc\xc1 \xd7 \xd0\xc5\xd2\xc5\xcb\xcc\xc0\xde\xc1\xd4\xc5\xcc\xc5 \xd3\xcf\xd7\xd0\xc1\xc4\xc1\xc5\xd4 \xd3 \xd7\xd9\xd3\xcf\xd4\xcf\xca \xd0\xc1\xce\xc5\xcc\xc9" },
	{ "iso-8859-2", "Spr\xe1" "vca okien pres\xfa" "va okraje okien\n(AfterStep, Enlightenment, FVWM, IceWM, Sawfish)" },
	{ "iso-8859-2", "Ka\xbe" "i posle, ki se skrivajo pred upravljalnik oken (SKIP-WINLIST)" },
	{ "iso-8859-5", "Window \xdc\xd5\xdd\xd0\xd4\xd7\xd5\xe0\xd8 \xdf\xde\xdc\xd5\xe0\xd0 \xd4\xd5\xda\xde\xe0\xd0\xe6\xd8\xde\xdd\xd8 \xdf\xe0\xde\xd7\xde\xe0 \xe3\xdc\xd5\xe1\xe2\xde \xe2\xde\xd3" "a\n(AfterStep, Enlightenment, FVWM, IceWM, Sawmill)" },
	{ "iso-8859-2", "Window menadzeri pomera dekoracioni prozor umesto toga\n(AfterStep, Enlightenment, FVWM, IceWM, Sawmill)" },
	{ "iso-8859-1", "F\xf6" "nsterhanteraren flyttar dekorationsf\xf6" "nstret ist\xe4" "llet\n(AfterStep, Enlightenment, FVWM, IceWM, Sawfish)" },
	/*{ "TSCII", "\xc0\xbd\xa2\xec\xb8\xbc\xee-\xba\xf0\xbc\xb8\xf2\xbe\xa2\xf8 \xc0\xa1\xf7\xec\xb8 \xd3\xca\xc2\xa1\xbe \xc0\xbd\xa2\xec\xb8\xbc\xed\xb8\xa8\xc7 \xb8\xa1\xc1\xa2 (\xc0\xbd\xa2\xec\xb8\xbc\xee-\xba\xf0\xbc\xb8\xf5-\xbe\xc5\xa2\xf7)" },*/
	{ "iso-8859-9", "Kaydetme iste\xf0" "ine bir uygulak cevap vermiyor .\nUygula\xf0\xfd sileyim mi , yoksa bekleyeyim mi ?" },
	{ "koi8-u", "\xf0\xc5\xd2\xc5\xcd\xa6\xdd\xc5\xce\xce\xd1 \xc4\xc5\xcb\xcf\xd2\xc1\xc3\xa6\xa7 \xda\xc1\xcd\xa6\xd3\xd4\xd8 \xd7\xa6\xcb\xce\xc1\n(AfterStep, Enlightenment, FVWM, IceWM, Sawfish)" },
	{ "iso-8859-1", "Cwand on scrift\xf4" "r est bodj\xee fo\xfb" ", li scrift\xf4" "r \xe8" "t totes\nles apliketes \xe5 dvins sont pierdowes. Bodj\xee ci scrift\xf4" "r chal?" },
	{ "gb2312", "\xc7\xa8\xd2\xc6\xb5\xbd\xd7\xb0\xca\xce\xb4\xb0\xbf\xda\xb9\xdc\xc0\xed\xb3\xcc\xd0\xf2(AfterStep, Enlightenment, FVWM, IceWM, SawMill)" },
	{ "big5", "\xb5\xf8\xb5\xa1\xba\xde\xb2" "z\xaa\xcc\xa5" "u\xb2\xbe\xb0\xca\xb8\xcb\xb9\xa2\xb5\xf8\xb5\xa1\n(AfterStep, Enlightenment, FVWM, IceWM, Sawmill)" },
};

static struct _d {
	const gchar *name;
	const gchar *email;
} test_decode[] = {
	{ NULL,                   "email@example.com" },
	{ NULL,                   "your.email@example.com" },
	{ "Your",                 "email@example.com" },
	{ "Your Email",           "email@example.com" },
	{ "Mr Smith Black",       "smith@black.com" },
	{ "Mr. Smith Black",      "smith@black.com" },
	{ "Mr. Smith O. Black",   "smith.o@black.com" },
	{ "Joe d'Magio",          "joe.d@example.com" },
	{ "example.com address",  "email@example.com" },
	{ "email at example.com", "email@example.com" },
	{ "email.at.example.com", "email@example.com" }
};

static struct _ldf {
	const gchar *with_name;
	const gchar *without_name;
} line_decode_formats[] = {
	{"%s <%s>",      "%s" },
	{ "%s<%s>",      "%s" },
	{ "\"%s\" <%s>", " <%s>"},
	{ "\"%s\"<%s>",  "<%s>"}
};

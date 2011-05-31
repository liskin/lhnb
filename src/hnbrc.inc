"# configuration file for hnb\n\
#\n\
# Use tabs when editing this file, or edit it through hnb with\n\
# \"hnb -a ~/.hnbrc\" to take advantage of the indentation in it.\n\
#\n\
# There are some macros which change e.g. the keybindings or look of hnb.\n\
# Search for \"configuration macro\" in this file to find more out about them.\n\
# Please note that these macros must be run after they have been defined.\n\
#\n\
\n\
##### user interface\n\
	##### display format / bullets\n\
		#\n\
		# display_format:\n\
		#\n\
		#   Defining how each node is displayed, the display string\n\
		#   syntax is interpreted as follows:\n\
		#\n\
		#   - Spaces turn into real spaces, i means indentation, -\n\
		#     means bullet, d means the real data of the node, x is\n\
		#     a temporary placeholder for upcoming column-types (for\n\
		#     debugging only).\n\
		#\n\
		#   - i and x can take an argument specifying how many\n\
		#     characters wide the field should be.\n\
		#\n\
		#   - Until further features are added, only the multiplier\n\
		#     after indentation actually does something. # indicates\n\
		#     the node number (actually line number when used as a\n\
		#     folding editor).\n\
		#\n\
		# bullets:\n\
		#\n\
		#   What kind of bullets are displayed before each item,\n\
		#   possible items and their default values are:\n\
		#\n\
		#   - bullet_leaf               \"  -\"\n\
		#   - bullet_parent             \"  +\"\n\
		#   - bullet_parent_expanded    \"  *\"\n\
		#   - bullet_todo_parent_undone \"[ ]\"\n\
		#   - bullet_todo_parent_done   \"[X]\"\n\
		#   - bullet_todo_leaf_undone   \"[ ]\"\n\
		#   - bullet_todo_leaf_done     \"[X]\"\n\
		#\n\
		##### samples\n\
			#display_format \"i4- d\"\n\
			#display_format \"i2-d\"\n\
			#display_format \"# i4- d\"\n\
			#display_format \"#i2-d\"\n\
			#\n\
			#bullet_parent          \"  +\"\n\
			#bullet_parent          \"  *\"\n\
			#bullet_parent          \"  ·\"\n\
			#bullet_parent_expanded \"  *\"\n\
			#bullet_parent_expanded \"  +\"\n\
			#bullet_parent_expanded \"  ·\"\n\
			#bullet_leaf            \"  -\"\n\
			#bullet_leaf            \"  *\"\n\
		\n\
		macro define bullets_standard\n\
			\n\
			display_format \"i4- d\"\n\
			\n\
			bullet_leaf               \"  -\"\n\
			bullet_parent             \"  +\"\n\
			bullet_parent_expanded    \"  *\"\n\
			bullet_todo_parent_undone \"[ ]\"\n\
			bullet_todo_parent_done   \"[X]\"\n\
			bullet_todo_leaf_undone   \"[_]\"\n\
			bullet_todo_leaf_done     \"[X]\"\n\
			\n\
			end\n\
		\n\
		macro define bullets_alternate\n\
			\n\
			display_format \"i2-d\"\n\
			\n\
			bullet_leaf               \" -\"\n\
			bullet_parent             \" +\"\n\
			bullet_parent_expanded    \" *\"\n\
			bullet_todo_parent_undone \" _\"\n\
			bullet_todo_parent_done   \" X\"\n\
			bullet_todo_leaf_undone   \" _\"\n\
			bullet_todo_leaf_done     \" X\"\n\
			\n\
			end\n\
		\n\
		##### configuration macro (bullets):\n\
		#\n\
		# To switch to the alternative bullet scheme enable\n\
		# \"bullet_alternate\" and disable \"bullet_standard\".\n\
		#\n\
		macro bullets_standard\n\
		#macro bullets_alternate\n\
		\n\
	##### fixed focus\n\
		#\n\
		# Lock the selection bar to a position 1/3 down the screen.\n\
		#\n\
		# 1=true, 0=false.\n\
		#\n\
		fixedfocus \"0\"\n\
		\n\
##### external commands\n\
	##### http:// handler\n\
		#\n\
		# What command is executed when a user wants a action performed\n\
		# on a entry containing an URL.\n\
		#\n\
		# * is substituted for the URL\n\
		#\n\
		# The X ones have their error and standard output redirected to\n\
		# dev/null and are put into the background to keep hnb running\n\
		# afterwards.\n\
		#\n\
		##### samples\n\
			#web_command \"opera -remote 'openURL(*)'			> /dev/null 2>&1 &\"\n\
			#web_command \"netscape -remote 'openURL(*)'		> /dev/null 2>&1 &\"\n\
			#web_command \"netscape -remote 'openURL(*,new-window)'	> /dev/null 2>&1 &\"\n\
			#web_command \"mozilla -remote 'openURL(*)'		> /dev/null 2>&1 &\"\n\
			#web_command \"mozilla -remote 'openURL(*,new-window)'	> /dev/null 2>&1 &\"\n\
			#web_command \"konqueror *				> /dev/null 2>&1 &\"\n\
			#web_command \"galeon -n					> /dev/null 2>&1 &\"\n\
			#web_command \"lynx *\"\n\
			#web_commend \"rxvt -fn fixed -rv +sb -e w3m *		> /dev/null 2>&1 &\"\n\
			#web_command \"opera -remote 'openURL(*,new-window)'	> /dev/null 2>&1 &\"\n\
		web_command \"w3m *\"\n\
		\n\
	##### mail@handler\n\
		#\n\
		# What command is executed when a user wants a action performed\n\
		# on a entry containing a mail-address.\n\
		#\n\
		# * is substituted for the mail-address\n\
		#\n\
		##### samples\n\
			#mail_command \"xterm -rv pine *				> /dev/null 2>&1 &\"\n\
			#mail_command \"xterm -rv +sb -e mutt *			> /dev/null 2>&1 &\"\n\
			#mail_command \"pine *\"\n\
		mail_command \"mutt *\"\n\
		\n\
	##### spell checking\n\
		#\n\
		# The spell-checker used.\n\
		#\n\
		##### samples\n\
			#spell_command \"aspell -c\"\n\
			#spell_command \"ispell -x\"\n\
			#spell_command \"ispell -x -damerican\"\n\
			#spell_command \"ispell -x -dbritish\"\n\
			#spell_command \"ispell -x -dbokmål\"\n\
			#spell_command \"ispell -x -dnynorsk\"\n\
		spell_command \"ispell -x\"\n\
		\n\
##### file formats\n\
	##### Default Format\n\
		#\n\
		# hnb, opml, xml, ascii  are possible choices\n\
		#\n\
		format \"hnb\"\n\
		\n\
	##### Remember current position in tree\n\
		#\n\
		# Whether hnb remembers the current position in a file\n\
		# (currently supported by the hnb DTD only, but might easily\n\
		# be extended since it fakes it with a XML comment).\n\
		#\n\
		# 1=true, 0=false.\n\
		#\n\
		savepos	\"1\"\n\
		\n\
	##### Remember expansions in tree\n\
		# wheter hnb remembers the expansion states in a file, (currently\n\
		# supported by the hnb DTD only) 1=true 0=false\n\
		saveexpand \"1\"\n\
		\n\
	##### XML format\n\
		##### XML Cuddling\n\
			#\n\
			# When loading xml files, should data be allowed on\n\
			# the same line as tags?\n\
			#\n\
			xml_cuddle \"0\"\n\
			\n\
	##### Autosave\n\
		#\n\
		# When nodes_changed reaches above threshold, invoke\n\
		# autosave.\n\
		#\n\
		autosave_threshold \"15\"\n\
		autosave_threshold_nodes_changed \"0\"\n\
		\n\
		#\n\
		# If change has occurred but is less than threshold, save when\n\
		# number of \"ticks\"/keypresses, invoke autosave.\n\
		#\n\
		autosave_timeout    \"50\"\n\
		autosave_timer     \"0\"\n\
		\n\
##### Color/style\n\
	#\n\
	# Color scheme configuration, syntax is:\n\
	#\n\
	# \"style <item>  <foreground/background> <attribute,[attribute]>\"\n\
	#\n\
	# Legal items are shown below.\n\
	#\n\
	# Colors are: blue, cyan, green, red, magenta, yellow, black and white.\n\
	#\n\
	# Attributes are: normal, reverse, bold and underline.\n\
	#\n\
	\n\
	macro define 'style_standard'	\n\
		style menuitem       default/default reverse\n\
		style menutext       cyan/default    normal\n\
		style parentnode     default/default bold\n\
		style node           default/default normal\n\
		style bullet         cyan/default    normal\n\
		style selected       yellow/red      bold\n\
		style parentselected yellow/red      bold\n\
		style background     default/default normal\n\
		end\n\
	macro define 'style_alternate'	\n\
		style menuitem       red/default     normal\n\
		style menutext       default/default normal\n\
		style parentnode     default/default bold\n\
		style node           default/default normal\n\
		style bullet         yellow/default    normal\n\
		style selected       yellow/blue      normal\n\
		style parentselected yellow/blue      bold\n\
		style background     default/default normal\n\
		end\n\
	\n\
	##### configuration macro (color scheme):\n\
	#\n\
	# To switch to the alternative color scheme enable\n\
	# \"style_alternate\" and disable \"style_standard\".\n\
	#\n\
	macro style_standard\n\
	#macro style_alternate\n\
	\n\
##### key-bindings\n\
	#\n\
	# Syntax:\n\
	#   \"bind <scope[,scope[...]]>  <key>   <action>\"\n\
	#\n\
	# Multiple actions can be chained together by using the virtual key\n\
	# \"..\" as the following key-binding.\n\
	#\n\
	##################################################\n\
	\n\
	context main\n\
		helptext \"ESC| menu || |F2| save || |F5| commandline || |return| edit |\n\
		bind f1 'status \"Take a look at ~/.hnbrc to check out the configuration\"'\n\
		bind .. 'status \"there you will also find details about the available keybindings.\"'\n\
		bind .. 'status \"please feel free to contribute more useful keybindings and helptexts...\"'\n\
		\n\
		bind esc menu\n\
		bind ^Q 'context quitsave'\n\
		\n\
		bind f5 'commandline'\n\
		bind .. 'status --clear'\n\
		\n\
		bind f6 'macro m_spellcheck'\n\
			macro define m_spellcheck\n\
				context spellcheck\n\
				save_state\n\
				spell\n\
			end\n\
		\n\
		bind ^E 'context export'\n\
		bind ^L 'context import'\n\
		bind ^F 'macro m_search'\n\
			macro define m_search\n\
				context search\n\
				save_state\n\
				getquery \"enter keyword to search for\"\n\
				search -f \"$query\"\n\
			end\n\
		\n\
		bind f9  menu\n\
		bind f10 'context user'\n\
		\n\
		bind ^G 'context grab'\n\
		bind .. 'save_state'\n\
		\n\
		bind ^A 'action'\n\
		bind up    up\n\
		bind down  down\n\
		bind left  right\n\
		bind ..    left\n\
		bind ..    left\n\
		bind right right\n\
		bind npage pagedown\n\
		bind ppage pageup\n\
		bind home  \"go root\"\n\
		\n\
		\n\
		bind return edit\n\
		bind del    remove\n\
		\n\
		bind ins    insert_below\n\
		bind .. edit\n\
		\n\
		bind tab complete\n\
		bind ^T  toggle_todo\n\
		bind ^D  toggle_done\n\
		bind >   indent\n\
		bind <   outdent\n\
		bind f2  save\n\
		\n\
		bind ^X save_state\n\
		bind .. cut\n\
		\n\
		bind ^C copy\n\
		\n\
		bind ^V paste\n\
		bind .. down\n\
		\n\
		bind ^S save_state\n\
		bind .. sort\n\
		\n\
		bind backspace	backspace\n\
		bind backspace2	backspace\n\
		\n\
		bind sleft \"movenode left\"\n\
		bind sright	 \"movenode right\"\n\
		bind sprevious \"movenode up\"\n\
		bind snext \"movenode down\"\n\
		\n\
		bind + expand\n\
		bind - collapse\n\
		bind ] \"expand --subtree\"\n\
		bind [ \"collapse --subtree\"\n\
		\n\
		bind ^Z restore_state\n\
		\n\
		macro define keybinding_standard\n\
			end\n\
		\n\
		macro define keybinding_vi\n\
			status   \"Mutt/Vi-like keybind by Osamu Aoki 2004 osamu@debian.org\"\n\
			helptext \"ESC| menu || |return| edit || |o| insert line || |s| save || |q| save&quit || |:| cmdline\"\n\
			bind q   'context quitsave'\n\
			bind :   'commandline'\n\
			bind E   'context export'\n\
			bind L   'context import'\n\
			bind /   'macro m_search'\n\
			bind G   'context grab'\n\
			bind ..  'save_state'\n\
			bind  A  'action'\n\
			bind k   up\n\
			bind j   down\n\
			bind h   right\n\
			bind ..  left\n\
			bind ..  left\n\
			bind l   right\n\
			bind z   pagedown\n\
			bind Z   pageup\n\
			bind i   edit\n\
			bind a   edit\n\
			bind o   insert_below\n\
			bind ..  edit\n\
			bind O   up\n\
			bind ..  insert_below\n\
			bind ..  edit\n\
			bind T   toggle_todo\n\
			bind D   toggle_done\n\
			bind w   save\n\
			bind s   save\n\
			bind y   copy\n\
			bind d   save_state\n\
			bind ..  cut\n\
			bind p   paste\n\
			bind ..  down\n\
			bind S   save_state\n\
			bind ..  sort\n\
			bind H   \"movenode left\"\n\
			bind L   \"movenode right\"\n\
			bind K   \"movenode up\"\n\
			bind J   \"movenode down\"\n\
			bind u   restore_state\n\
			# Use \"bind any ignore\" instead to skip the warnings.\n\
			bind any unbound\n\
			end\n\
		\n\
		##### configuration macro (keybindings):\n\
		#\n\
		# To switch to the alternative keybindings enable\n\
		# \"keybinding_vi\" and disable \"keybinding_standard\".\n\
		#\n\
		macro keybinding_standard\n\
		#macro keybinding_vi\n\
		\n\
	context nodeedit\n\
		helptext \"editing node |  |ESC| revert || |return| confirm || |^S| split || |^J| join\"\n\
		bind up    up\n\
		bind down  down\n\
		bind left  left\n\
		bind ^B    left\n\
		bind right right\n\
		bind ^F    right\n\
		\n\
		bind return  confirm\n\
		bind esc     cancel\n\
		\n\
		bind ^S  split\n\
		bind ^J  join\n\
		\n\
		bind backspace  backspace\n\
		bind backspace2 backspace\n\
		\n\
		bind ^A   bol\n\
		bind home bol\n\
		bind ^E   eol\n\
		bind end  eol\n\
		\n\
		bind ^D   delete\n\
		bind del  delete\n\
		# bkill_word is currently not implemented.\n\
		bind ^W   bkill_word\n\
		\n\
	context lineedit\n\
		helptext lineedit\n\
		\n\
		bind up      up\n\
		bind down    down\n\
		bind left    left\n\
		bind ^B      left\n\
		bind right   right\n\
		bind ^F      right\n\
		\n\
		bind return  confirm\n\
		bind esc     cancel\n\
		bind tab     complete\n\
		\n\
		bind backspace backspace\n\
		bind backspace2 backspace\n\
		bind ^D         delete\n\
		bind del        delete\n\
		# bkill_word is currently not implemented.\n\
		bind ^W   bkill_word\n\
		\n\
		bind ^A   bol\n\
		bind home bol\n\
		bind ^E   eol\n\
		bind end  eol\n\
		\n\
	context confirm\n\
		helptext \" y | | j | |return| confirm || |any key| cancel\"\n\
		\n\
		bind y      confirm\n\
		bind j      confirm\n\
		bind return confirm\n\
		\n\
		bind any    cancel\n\
		\n\
	macro define 'quitsave_standard'\n\
		context quitsave\n\
		helptext \"Save on exit? |    | Y |es | J |a || | N |o || |ESC| cancel\"\n\
		bind Y  save\n\
		bind .. quit\n\
		\n\
		bind y  save\n\
		bind .. quit\n\
		\n\
		bind J  save\n\
		bind .. quit\n\
		\n\
		bind j  save\n\
		bind .. quit\n\
		\n\
		bind N  quit\n\
		bind n  quit\n\
		\n\
		bind esc \"context main\"\n\
		bind any unbound\n\
		\n\
		end\n\
		\n\
	macro define 'quitsave_alternate'\n\
		context quitsave\n\
		helptext \"Save on exit? | |return| confirm || |x| exit without saving || |ESC| cancel\"\n\
		bind return save\n\
		bind .. quit\n\
		bind x  quit\n\
		bind esc \"context main\"\n\
		bind any unbound\n\
		end\n\
		\n\
	##### configuration macro (quit/save dialog):\n\
	#\n\
	# To switch to the alternative save/quit dialog enable\n\
	# \"quitsave_alternate\" and disable \"quitsave_standard\".\n\
	#\n\
	macro quitsave_standard\n\
	#macro quitsave_alternate\n\
		\n\
	\n\
	context spellcheck\n\
		helptext \"Spellchecking |   |Space| next node |ESC| cancel |F6,Return| confirm changes\"\n\
		\n\
		bind space \"go recurse\"\n\
		bind ..    spell\n\
		\n\
		bind down \"go recurse\"\n\
		bind ..   spell\n\
		\n\
		bind up   \"go backrecurse\"\n\
		bind ..   spell\n\
		\n\
		bind return \"context main\"\n\
		bind f6 \"context main\"\n\
		\n\
		bind esc restore_state\n\
		bind .. \"context main\"\n\
		\n\
		bind any unbound\n\
	context grab\n\
		helptext \"Node grabbed |  |return| |space| drop here || |ESC| cancel\"\n\
		bind esc    restore_state\n\
		bind ..     \"context main\"\n\
		bind return \"context main\"\n\
		bind space  \"context main\"\n\
		bind left   \"movenode left\"\n\
		bind right  \"movenode right\"\n\
		bind up     \"movenode up\"\n\
		bind down   \"movenode down\"\n\
		bind any    unbound\n\
	context export\n\
		helptext \"Export |  | A |scii || | H |tml  html| C |ss  | P |ostscript  | O |PML  |ESC| cancel \"\n\
			macro define m_export_ascii\n\
				save_state\n\
				go root\n\
				getquery 'what file should I save the ASCII output in?'\n\
				export_ascii $query\n\
				restore_state\n\
				context main\n\
			end\n\
			macro define m_export_html\n\
				save_state\n\
				go root\n\
				getquery 'what file should I save the HTML output in?'\n\
				export_html $query\n\
				context main\n\
				restore_state\n\
			end\n\
			macro define m_export_htmlcss\n\
				save_state\n\
				go root\n\
				getquery 'what file should I save the HTML/CSS output in?'\n\
				export_htmlcss $query\n\
				context main\n\
				restore_state\n\
			end\n\
			macro define m_export_opml\n\
				save_state\n\
				go root\n\
				getquery 'what file should I save the OPML output in?'\n\
				export_opml $query\n\
				context main\n\
				restore_state\n\
			end\n\
			macro define m_export_ps\n\
				save_state\n\
				go root\n\
				getquery 'what file should I save the PostScript output in?'\n\
				export_ps $query\n\
				context main\n\
				restore_state\n\
			end\n\
		bind esc \"context main\"\n\
		bind A	\"macro m_export_ascii\"\n\
		bind a	\"macro m_export_ascii\"\n\
		bind H  \"macro m_export_html\"\n\
		bind h  \"macro m_export_html\"\n\
		bind C  \"macro m_export_htmlcss\"\n\
		bind c  \"macro m_export_htmlcss\"\n\
		bind O  \"macro m_export_opml\"\n\
		bind o  \"macro m_export_opml\"\n\
		bind P  \"macro m_export_ps\"\n\
		bind p  \"macro m_export_ps\"		\n\
		bind any unbound\n\
	context import\n\
		helptext \"Import |  | A |scii | O |PML  | H |hnb   |ESC| cancel \"\n\
		\n\
		bind esc ..\n\
			bind .. \"context main\"\n\
		bind A ..\n\
			bind .. 'getquery \"what file should I import ASCII from?\"'\n\
			bind .. 'import_ascii \"$query\"'\n\
			bind .. 'context main'\n\
		bind a ..\n\
			bind .. 'getquery \"what file should I import ASCII from?\"'\n\
			bind .. 'import_ascii \"$query\"'\n\
			bind .. 'context main'\n\
		bind O ..\n\
			bind .. 'getquery \"what file should I import OPML from?\"'\n\
			bind .. 'import_opml \"$query\"'\n\
			bind .. 'context main'\n\
		bind o ..\n\
			bind .. 'getquery \"what file should I import OPML from?\"'\n\
			bind .. 'import_opml \"$query\"'\n\
			bind .. 'context main'\n\
		bind H ..\n\
			bind .. 'getquery \"what file should I import HNB data from?\"'\n\
			bind .. 'import_hnb \"$query\"'\n\
			bind .. 'context main'\n\
		bind h ..\n\
			bind .. 'getquery \"what file should I import HNB data from?\"'\n\
			bind .. 'import_hnb \"$query\"'\n\
			bind .. 'context main'\n\
		\n\
		bind any unbound\n\
	context search\n\
		helptext \"Searching |  |ESC| cancel || | n |ext || | p |revious || |space|/|return| go\"\n\
		bind down   'search -f \"$query\"'\n\
		bind up     'search -b \"$query\"'\n\
		bind p      'search -b \"$query\"'\n\
		bind n      'search -f \"$query\"'\n\
		bind N      'search -b \"$query\"'\n\
		\n\
		bind return \"context main\"\n\
		bind space \"context main\"\n\
		\n\
		bind esc    \"context main\"\n\
		bind ..     restore_state\n\
		\n\
		bind any    unbound\n\
	context user\n\
		helptext \"Usermenu | |ESC| cancel |F1| ispell language |F2| browser command |F3| expand all  |F4|  collapse all\"\n\
		bind esc \"context main\"\n\
		\n\
		bind f1  \"context user_ispell\"\n\
		bind f2  \"context user_browser\"\n\
		bind f3  \"expand --all\"\n\
		bind ..  \"context main\"\n\
		\n\
		bind f4  \"collapse --all\"\n\
		bind ..  \"context main\"\n\
		\n\
		bind any \"unbound\"\n\
		\n\
	context user_ispell\n\
		helptext \"Language for ispell: | |F1| Br.english  |F2| Am.english  |F3| Norwegian bokmål  |F4| Norwegian nynorsk\"\n\
		bind f1  'spell_command \"ispell -x -damerican\"'\n\
		bind ..  'context main'\n\
		\n\
		bind f2  'spell_command \"ispell -x -dbritish\"'\n\
		bind ..  'context main'\n\
		\n\
		bind f3  'spell_command \"ispell -x -dbokmål\"'\n\
		bind ..  'context main'\n\
		\n\
		bind f4  'spell_command \"ispell -x -dnynorsk\"'\n\
		bind ..  'context main'\n\
		\n\
		bind esc 'context main'\n\
		bind any unbound\n\
		\n\
	context user_browser\n\
		helptext \"Browser action: | |F1| w3m replace hnb  |F2| w3m in rxvt  |F3| Opera, new tab  |F4| Mozilla new window\"\n\
		bind f1 'browser_command \"w3m *\"'\n\
		bind .. 'context main'\n\
		\n\
		bind f2 'web_commend \"xterm -T \\\"w3m spawned from hnb\\\" -fn fixed -rv +sb -e w3m * > /dev/null 2>&1 &\"'\n\
		bind .. 'context main'\n\
		\n\
		bind f3 'web_command \"opera -remote 'openURL(*,new-window)' > /dev/null 2>&1 &\"'\n\
		bind .. 'context main'\n\
		\n\
		bind f4 'web_command \"mozilla -remote 'openURL(*,new-window)'	> /dev/null 2>&1 &\"'\n\
		bind .. 'context main'\n\
		\n\
		bind esc 'context main'\n\
		bind any unbound\n\
		\n\
	##### key related options\n\
		##### escdelay\n\
			#\n\
			# How long the program should wait before accepting\n\
			# that ESC(27d) is the ESC key and not the start of an\n\
			# escape sequence.\n\
			#\n\
			# Increase this number if you are using hnb over a slow\n\
			# network.\n\
			#\n\
			# Link value given is in ms (1/1000seconds).\n\
			#\n\
			escdelay 100\n\
##### menu definition\n\
	##### file\n\
		menu \"File\" \"------------\" \"\"\n\
		menu \"File\" \"save      F2\" \"save\"\n\
		menu \"File\" \"save as..   \" \"macro saveas\"\n\
			macro define saveas\n\
				getquery db_file 'fila to save'\n\
				save_state\n\
				go root\n\
				export_$format $db_file\n\
				restore_state\n\
				end\n\
		menu \"File\" \"revert   \" \"revert\"		\n\
		menu \"File\" \"------------\" \"\"\n\
		menu \"File\" \"export    ^E\" \"context export\"\n\
		menu \"File\" \"import    ^L\" \"context import\"\n\
		menu \"File\" \"------------\" \"\"\n\
		menu \"File\" \"spell chk F6\" \"macro m_spellcheck\"\n\
		menu \"File\" \"expand all\"	    \"expand --all\"\n\
		menu \"File\" \"collapse all\"      \"collapse --all\"\n\
		menu \"File\" \"statistics\"	\"macro stats\"\n\
			macro define stats\n\
				status \"file: \\\"$db_file\\\" format:$format\"\n\
				mem\n\
				stats			\n\
				end\n\
		menu \"File\" \"------------\" \"\"\n\
		menu \"File\" \"exit      ^Q\" \"context quitsave\"\n\
	##### edit\n\
		menu \"Edit\" \"---------\" \"\"\n\
		menu \"Edit\" \"copy   ^C\" \"copy\"\n\
		menu \"Edit\" \"cut    ^X\" \"cut\"\n\
		menu \"Edit\" \"paste  ^V\" \"paste\"\n\
		menu \"Edit\" \"---------\" \"\"\n\
		menu \"Edit\" \"Search ^F\" \"macro m_search\"\n\
	##### entry\n\
		menu \"Entry\" \"-------------------\" \"\"\n\
		menu \"Entry\" \"edit         return\" \"edit\"\n\
		menu \"Entry\" \"delete          del\" \"remove\"\n\
		menu \"Entry\" \"-------------------\" \"\"\n\
		menu \"Entry\" \"do action        ^A\" \"action\"\n\
		menu \"Entry\" \"indent            >\" \"indent\"\n\
		menu \"Entry\" \"outdent           <\" \"outdent\"\n\
		menu \"Entry\" \"toggle todo      ^T\" \"toggle_todo\"\n\
		menu \"Entry\" \"toggle done      ^D\" \"toggle_done\"\n\
		menu \"Entry\" \"expand            +\" \"expand\"\n\
		menu \"Entry\" \"expand subtree    ]\" \"expand --subtree\"\n\
		menu \"Entry\" \"collapse          -\" \"collapse\"\n\
		menu \"Entry\" \"collapse subtree  [\" \"collapse --subtree\"\n\
	##### level\n\
		menu \"Level\" \"------------\" \"\"\n\
		menu \"Level\" \"sort      ^S\" \"sort -a\"\n\
		menu \"Level\" \"sort (desc.)\" \"sort -d\"\n\
		menu \"Level\" \"shuffle     \" \"sort -r\"\n\
#####\n\
	context main\n\
	macro define m_about\n\
		status \"hnb - hierarchical notebook   http://hnb.sourceforge.net/\"\n\
		status \"(c) Øyvind Kolås 2001-2003    pippin@users.sourceforge.net\"\n\
		status \"(this is lhnb, hnb's continuation by Tomas Janousek)\"\n\
		end\n\
	\n\
	macro m_about\n\
"

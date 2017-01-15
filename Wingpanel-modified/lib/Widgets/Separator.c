/* Separator.c generated by valac 0.34.4, the Vala compiler
 * generated from Separator.vala, do not modify */

/*
 * Copyright (c) 2011-2015 Wingpanel Developers (http://launchpad.net/wingpanel)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>


#define WINGPANEL_WIDGETS_TYPE_SEPARATOR (wingpanel_widgets_separator_get_type ())
#define WINGPANEL_WIDGETS_SEPARATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WINGPANEL_WIDGETS_TYPE_SEPARATOR, WingpanelWidgetsSeparator))
#define WINGPANEL_WIDGETS_SEPARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WINGPANEL_WIDGETS_TYPE_SEPARATOR, WingpanelWidgetsSeparatorClass))
#define WINGPANEL_WIDGETS_IS_SEPARATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WINGPANEL_WIDGETS_TYPE_SEPARATOR))
#define WINGPANEL_WIDGETS_IS_SEPARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WINGPANEL_WIDGETS_TYPE_SEPARATOR))
#define WINGPANEL_WIDGETS_SEPARATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WINGPANEL_WIDGETS_TYPE_SEPARATOR, WingpanelWidgetsSeparatorClass))

typedef struct _WingpanelWidgetsSeparator WingpanelWidgetsSeparator;
typedef struct _WingpanelWidgetsSeparatorClass WingpanelWidgetsSeparatorClass;
typedef struct _WingpanelWidgetsSeparatorPrivate WingpanelWidgetsSeparatorPrivate;

struct _WingpanelWidgetsSeparator {
	GtkSeparator parent_instance;
	WingpanelWidgetsSeparatorPrivate * priv;
};

struct _WingpanelWidgetsSeparatorClass {
	GtkSeparatorClass parent_class;
};


static gpointer wingpanel_widgets_separator_parent_class = NULL;

GType wingpanel_widgets_separator_get_type (void) G_GNUC_CONST;
enum  {
	WINGPANEL_WIDGETS_SEPARATOR_DUMMY_PROPERTY
};
WingpanelWidgetsSeparator* wingpanel_widgets_separator_new (void);
WingpanelWidgetsSeparator* wingpanel_widgets_separator_construct (GType object_type);


WingpanelWidgetsSeparator* wingpanel_widgets_separator_construct (GType object_type) {
	WingpanelWidgetsSeparator * self = NULL;
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Separator.vala"
	self = (WingpanelWidgetsSeparator*) g_object_new (object_type, NULL);
#line 22 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Separator.vala"
	gtk_orientable_set_orientation ((GtkOrientable*) self, GTK_ORIENTATION_HORIZONTAL);
#line 23 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Separator.vala"
	gtk_widget_set_margin_top ((GtkWidget*) self, 3);
#line 24 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Separator.vala"
	gtk_widget_set_margin_bottom ((GtkWidget*) self, 3);
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Separator.vala"
	return self;
#line 72 "Separator.c"
}


WingpanelWidgetsSeparator* wingpanel_widgets_separator_new (void) {
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Separator.vala"
	return wingpanel_widgets_separator_construct (WINGPANEL_WIDGETS_TYPE_SEPARATOR);
#line 79 "Separator.c"
}


static void wingpanel_widgets_separator_class_init (WingpanelWidgetsSeparatorClass * klass) {
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Separator.vala"
	wingpanel_widgets_separator_parent_class = g_type_class_peek_parent (klass);
#line 86 "Separator.c"
}


static void wingpanel_widgets_separator_instance_init (WingpanelWidgetsSeparator * self) {
}


GType wingpanel_widgets_separator_get_type (void) {
	static volatile gsize wingpanel_widgets_separator_type_id__volatile = 0;
	if (g_once_init_enter (&wingpanel_widgets_separator_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (WingpanelWidgetsSeparatorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) wingpanel_widgets_separator_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (WingpanelWidgetsSeparator), 0, (GInstanceInitFunc) wingpanel_widgets_separator_instance_init, NULL };
		GType wingpanel_widgets_separator_type_id;
		wingpanel_widgets_separator_type_id = g_type_register_static (gtk_separator_get_type (), "WingpanelWidgetsSeparator", &g_define_type_info, 0);
		g_once_init_leave (&wingpanel_widgets_separator_type_id__volatile, wingpanel_widgets_separator_type_id);
	}
	return wingpanel_widgets_separator_type_id__volatile;
}



/* Settings.c generated by valac 0.34.4, the Vala compiler
 * generated from Settings.vala, do not modify */

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
#include <granite.h>
#include <stdlib.h>
#include <string.h>


#define WINGPANEL_SERVICES_TYPE_PANEL_SETTINGS (wingpanel_services_panel_settings_get_type ())
#define WINGPANEL_SERVICES_PANEL_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WINGPANEL_SERVICES_TYPE_PANEL_SETTINGS, WingpanelServicesPanelSettings))
#define WINGPANEL_SERVICES_PANEL_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WINGPANEL_SERVICES_TYPE_PANEL_SETTINGS, WingpanelServicesPanelSettingsClass))
#define WINGPANEL_SERVICES_IS_PANEL_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WINGPANEL_SERVICES_TYPE_PANEL_SETTINGS))
#define WINGPANEL_SERVICES_IS_PANEL_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WINGPANEL_SERVICES_TYPE_PANEL_SETTINGS))
#define WINGPANEL_SERVICES_PANEL_SETTINGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WINGPANEL_SERVICES_TYPE_PANEL_SETTINGS, WingpanelServicesPanelSettingsClass))

typedef struct _WingpanelServicesPanelSettings WingpanelServicesPanelSettings;
typedef struct _WingpanelServicesPanelSettingsClass WingpanelServicesPanelSettingsClass;
typedef struct _WingpanelServicesPanelSettingsPrivate WingpanelServicesPanelSettingsPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define WINGPANEL_SERVICES_TYPE_INTERFACE_SETTINGS (wingpanel_services_interface_settings_get_type ())
#define WINGPANEL_SERVICES_INTERFACE_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WINGPANEL_SERVICES_TYPE_INTERFACE_SETTINGS, WingpanelServicesInterfaceSettings))
#define WINGPANEL_SERVICES_INTERFACE_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WINGPANEL_SERVICES_TYPE_INTERFACE_SETTINGS, WingpanelServicesInterfaceSettingsClass))
#define WINGPANEL_SERVICES_IS_INTERFACE_SETTINGS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WINGPANEL_SERVICES_TYPE_INTERFACE_SETTINGS))
#define WINGPANEL_SERVICES_IS_INTERFACE_SETTINGS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WINGPANEL_SERVICES_TYPE_INTERFACE_SETTINGS))
#define WINGPANEL_SERVICES_INTERFACE_SETTINGS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WINGPANEL_SERVICES_TYPE_INTERFACE_SETTINGS, WingpanelServicesInterfaceSettingsClass))

typedef struct _WingpanelServicesInterfaceSettings WingpanelServicesInterfaceSettings;
typedef struct _WingpanelServicesInterfaceSettingsClass WingpanelServicesInterfaceSettingsClass;
typedef struct _WingpanelServicesInterfaceSettingsPrivate WingpanelServicesInterfaceSettingsPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))

struct _WingpanelServicesPanelSettings {
	GraniteServicesSettings parent_instance;
	WingpanelServicesPanelSettingsPrivate * priv;
};

struct _WingpanelServicesPanelSettingsClass {
	GraniteServicesSettingsClass parent_class;
};

struct _WingpanelServicesPanelSettingsPrivate {
	gboolean _use_transparency;
};

struct _WingpanelServicesInterfaceSettings {
	GraniteServicesSettings parent_instance;
	WingpanelServicesInterfaceSettingsPrivate * priv;
};

struct _WingpanelServicesInterfaceSettingsClass {
	GraniteServicesSettingsClass parent_class;
};

struct _WingpanelServicesInterfaceSettingsPrivate {
	gchar* _gtk_theme;
};


static gpointer wingpanel_services_panel_settings_parent_class = NULL;
static WingpanelServicesPanelSettings* wingpanel_services_panel_settings_instance;
static WingpanelServicesPanelSettings* wingpanel_services_panel_settings_instance = NULL;
static gpointer wingpanel_services_interface_settings_parent_class = NULL;
static WingpanelServicesInterfaceSettings* wingpanel_services_interface_settings_instance;
static WingpanelServicesInterfaceSettings* wingpanel_services_interface_settings_instance = NULL;

GType wingpanel_services_panel_settings_get_type (void) G_GNUC_CONST;
#define WINGPANEL_SERVICES_PANEL_SETTINGS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), WINGPANEL_SERVICES_TYPE_PANEL_SETTINGS, WingpanelServicesPanelSettingsPrivate))
enum  {
	WINGPANEL_SERVICES_PANEL_SETTINGS_DUMMY_PROPERTY,
	WINGPANEL_SERVICES_PANEL_SETTINGS_USE_TRANSPARENCY
};
WingpanelServicesPanelSettings* wingpanel_services_panel_settings_new (void);
WingpanelServicesPanelSettings* wingpanel_services_panel_settings_construct (GType object_type);
WingpanelServicesPanelSettings* wingpanel_services_panel_settings_get_default (void);
gboolean wingpanel_services_panel_settings_get_use_transparency (WingpanelServicesPanelSettings* self);
void wingpanel_services_panel_settings_set_use_transparency (WingpanelServicesPanelSettings* self, gboolean value);
static void wingpanel_services_panel_settings_finalize (GObject* obj);
static void _vala_wingpanel_services_panel_settings_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_wingpanel_services_panel_settings_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);
GType wingpanel_services_interface_settings_get_type (void) G_GNUC_CONST;
#define WINGPANEL_SERVICES_INTERFACE_SETTINGS_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), WINGPANEL_SERVICES_TYPE_INTERFACE_SETTINGS, WingpanelServicesInterfaceSettingsPrivate))
enum  {
	WINGPANEL_SERVICES_INTERFACE_SETTINGS_DUMMY_PROPERTY,
	WINGPANEL_SERVICES_INTERFACE_SETTINGS_GTK_THEME
};
WingpanelServicesInterfaceSettings* wingpanel_services_interface_settings_new (void);
WingpanelServicesInterfaceSettings* wingpanel_services_interface_settings_construct (GType object_type);
WingpanelServicesInterfaceSettings* wingpanel_services_interface_settings_get_default (void);
const gchar* wingpanel_services_interface_settings_get_gtk_theme (WingpanelServicesInterfaceSettings* self);
void wingpanel_services_interface_settings_set_gtk_theme (WingpanelServicesInterfaceSettings* self, const gchar* value);
static void wingpanel_services_interface_settings_finalize (GObject* obj);
static void _vala_wingpanel_services_interface_settings_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_wingpanel_services_interface_settings_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


WingpanelServicesPanelSettings* wingpanel_services_panel_settings_construct (GType object_type) {
	WingpanelServicesPanelSettings * self = NULL;
#line 27 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	self = (WingpanelServicesPanelSettings*) granite_services_settings_construct (object_type, "org.pantheon.desktop.wingpanel");
#line 26 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	return self;
#line 125 "Settings.c"
}


WingpanelServicesPanelSettings* wingpanel_services_panel_settings_new (void) {
#line 26 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	return wingpanel_services_panel_settings_construct (WINGPANEL_SERVICES_TYPE_PANEL_SETTINGS);
#line 132 "Settings.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 35 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	return self ? g_object_ref (self) : NULL;
#line 139 "Settings.c"
}


WingpanelServicesPanelSettings* wingpanel_services_panel_settings_get_default (void) {
	WingpanelServicesPanelSettings* result = NULL;
	WingpanelServicesPanelSettings* _tmp0_ = NULL;
	WingpanelServicesPanelSettings* _tmp2_ = NULL;
	WingpanelServicesPanelSettings* _tmp3_ = NULL;
#line 31 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	_tmp0_ = wingpanel_services_panel_settings_instance;
#line 31 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	if (_tmp0_ == NULL) {
#line 152 "Settings.c"
		WingpanelServicesPanelSettings* _tmp1_ = NULL;
#line 32 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		_tmp1_ = wingpanel_services_panel_settings_new ();
#line 32 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		_g_object_unref0 (wingpanel_services_panel_settings_instance);
#line 32 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		wingpanel_services_panel_settings_instance = _tmp1_;
#line 160 "Settings.c"
	}
#line 35 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	_tmp2_ = wingpanel_services_panel_settings_instance;
#line 35 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	_tmp3_ = _g_object_ref0 (_tmp2_);
#line 35 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	result = _tmp3_;
#line 35 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	return result;
#line 170 "Settings.c"
}


gboolean wingpanel_services_panel_settings_get_use_transparency (WingpanelServicesPanelSettings* self) {
	gboolean result;
	gboolean _tmp0_ = FALSE;
#line 24 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 24 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	_tmp0_ = self->priv->_use_transparency;
#line 24 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	result = _tmp0_;
#line 24 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	return result;
#line 185 "Settings.c"
}


void wingpanel_services_panel_settings_set_use_transparency (WingpanelServicesPanelSettings* self, gboolean value) {
	gboolean _tmp0_ = FALSE;
#line 24 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	g_return_if_fail (self != NULL);
#line 24 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	_tmp0_ = value;
#line 24 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	self->priv->_use_transparency = _tmp0_;
#line 24 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	g_object_notify ((GObject *) self, "use-transparency");
#line 199 "Settings.c"
}


static void wingpanel_services_panel_settings_class_init (WingpanelServicesPanelSettingsClass * klass) {
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	wingpanel_services_panel_settings_parent_class = g_type_class_peek_parent (klass);
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	g_type_class_add_private (klass, sizeof (WingpanelServicesPanelSettingsPrivate));
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_wingpanel_services_panel_settings_get_property;
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_wingpanel_services_panel_settings_set_property;
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	G_OBJECT_CLASS (klass)->finalize = wingpanel_services_panel_settings_finalize;
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), WINGPANEL_SERVICES_PANEL_SETTINGS_USE_TRANSPARENCY, g_param_spec_boolean ("use-transparency", "use-transparency", "use-transparency", FALSE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 216 "Settings.c"
}


static void wingpanel_services_panel_settings_instance_init (WingpanelServicesPanelSettings * self) {
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	self->priv = WINGPANEL_SERVICES_PANEL_SETTINGS_GET_PRIVATE (self);
#line 223 "Settings.c"
}


static void wingpanel_services_panel_settings_finalize (GObject* obj) {
	WingpanelServicesPanelSettings * self;
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, WINGPANEL_SERVICES_TYPE_PANEL_SETTINGS, WingpanelServicesPanelSettings);
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	G_OBJECT_CLASS (wingpanel_services_panel_settings_parent_class)->finalize (obj);
#line 233 "Settings.c"
}


GType wingpanel_services_panel_settings_get_type (void) {
	static volatile gsize wingpanel_services_panel_settings_type_id__volatile = 0;
	if (g_once_init_enter (&wingpanel_services_panel_settings_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (WingpanelServicesPanelSettingsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) wingpanel_services_panel_settings_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (WingpanelServicesPanelSettings), 0, (GInstanceInitFunc) wingpanel_services_panel_settings_instance_init, NULL };
		GType wingpanel_services_panel_settings_type_id;
		wingpanel_services_panel_settings_type_id = g_type_register_static (GRANITE_SERVICES_TYPE_SETTINGS, "WingpanelServicesPanelSettings", &g_define_type_info, 0);
		g_once_init_leave (&wingpanel_services_panel_settings_type_id__volatile, wingpanel_services_panel_settings_type_id);
	}
	return wingpanel_services_panel_settings_type_id__volatile;
}


static void _vala_wingpanel_services_panel_settings_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	WingpanelServicesPanelSettings * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, WINGPANEL_SERVICES_TYPE_PANEL_SETTINGS, WingpanelServicesPanelSettings);
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	switch (property_id) {
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		case WINGPANEL_SERVICES_PANEL_SETTINGS_USE_TRANSPARENCY:
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		g_value_set_boolean (value, wingpanel_services_panel_settings_get_use_transparency (self));
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		break;
#line 260 "Settings.c"
		default:
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		break;
#line 266 "Settings.c"
	}
}


static void _vala_wingpanel_services_panel_settings_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	WingpanelServicesPanelSettings * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, WINGPANEL_SERVICES_TYPE_PANEL_SETTINGS, WingpanelServicesPanelSettings);
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	switch (property_id) {
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		case WINGPANEL_SERVICES_PANEL_SETTINGS_USE_TRANSPARENCY:
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		wingpanel_services_panel_settings_set_use_transparency (self, g_value_get_boolean (value));
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		break;
#line 282 "Settings.c"
		default:
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		break;
#line 288 "Settings.c"
	}
}


WingpanelServicesInterfaceSettings* wingpanel_services_interface_settings_construct (GType object_type) {
	WingpanelServicesInterfaceSettings * self = NULL;
#line 45 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	self = (WingpanelServicesInterfaceSettings*) granite_services_settings_construct (object_type, "org.gnome.desktop.interface");
#line 44 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	return self;
#line 299 "Settings.c"
}


WingpanelServicesInterfaceSettings* wingpanel_services_interface_settings_new (void) {
#line 44 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	return wingpanel_services_interface_settings_construct (WINGPANEL_SERVICES_TYPE_INTERFACE_SETTINGS);
#line 306 "Settings.c"
}


WingpanelServicesInterfaceSettings* wingpanel_services_interface_settings_get_default (void) {
	WingpanelServicesInterfaceSettings* result = NULL;
	WingpanelServicesInterfaceSettings* _tmp0_ = NULL;
	WingpanelServicesInterfaceSettings* _tmp2_ = NULL;
	WingpanelServicesInterfaceSettings* _tmp3_ = NULL;
#line 49 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	_tmp0_ = wingpanel_services_interface_settings_instance;
#line 49 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	if (_tmp0_ == NULL) {
#line 319 "Settings.c"
		WingpanelServicesInterfaceSettings* _tmp1_ = NULL;
#line 50 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		_tmp1_ = wingpanel_services_interface_settings_new ();
#line 50 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		_g_object_unref0 (wingpanel_services_interface_settings_instance);
#line 50 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		wingpanel_services_interface_settings_instance = _tmp1_;
#line 327 "Settings.c"
	}
#line 53 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	_tmp2_ = wingpanel_services_interface_settings_instance;
#line 53 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	_tmp3_ = _g_object_ref0 (_tmp2_);
#line 53 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	result = _tmp3_;
#line 53 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	return result;
#line 337 "Settings.c"
}


const gchar* wingpanel_services_interface_settings_get_gtk_theme (WingpanelServicesInterfaceSettings* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
#line 42 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 42 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	_tmp0_ = self->priv->_gtk_theme;
#line 42 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	result = _tmp0_;
#line 42 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	return result;
#line 352 "Settings.c"
}


void wingpanel_services_interface_settings_set_gtk_theme (WingpanelServicesInterfaceSettings* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
#line 42 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	g_return_if_fail (self != NULL);
#line 42 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	_tmp0_ = value;
#line 42 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 42 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	_g_free0 (self->priv->_gtk_theme);
#line 42 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	self->priv->_gtk_theme = _tmp1_;
#line 42 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	g_object_notify ((GObject *) self, "gtk-theme");
#line 371 "Settings.c"
}


static void wingpanel_services_interface_settings_class_init (WingpanelServicesInterfaceSettingsClass * klass) {
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	wingpanel_services_interface_settings_parent_class = g_type_class_peek_parent (klass);
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	g_type_class_add_private (klass, sizeof (WingpanelServicesInterfaceSettingsPrivate));
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_wingpanel_services_interface_settings_get_property;
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_wingpanel_services_interface_settings_set_property;
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	G_OBJECT_CLASS (klass)->finalize = wingpanel_services_interface_settings_finalize;
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), WINGPANEL_SERVICES_INTERFACE_SETTINGS_GTK_THEME, g_param_spec_string ("gtk-theme", "gtk-theme", "gtk-theme", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
#line 388 "Settings.c"
}


static void wingpanel_services_interface_settings_instance_init (WingpanelServicesInterfaceSettings * self) {
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	self->priv = WINGPANEL_SERVICES_INTERFACE_SETTINGS_GET_PRIVATE (self);
#line 395 "Settings.c"
}


static void wingpanel_services_interface_settings_finalize (GObject* obj) {
	WingpanelServicesInterfaceSettings * self;
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, WINGPANEL_SERVICES_TYPE_INTERFACE_SETTINGS, WingpanelServicesInterfaceSettings);
#line 42 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	_g_free0 (self->priv->_gtk_theme);
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	G_OBJECT_CLASS (wingpanel_services_interface_settings_parent_class)->finalize (obj);
#line 407 "Settings.c"
}


GType wingpanel_services_interface_settings_get_type (void) {
	static volatile gsize wingpanel_services_interface_settings_type_id__volatile = 0;
	if (g_once_init_enter (&wingpanel_services_interface_settings_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (WingpanelServicesInterfaceSettingsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) wingpanel_services_interface_settings_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (WingpanelServicesInterfaceSettings), 0, (GInstanceInitFunc) wingpanel_services_interface_settings_instance_init, NULL };
		GType wingpanel_services_interface_settings_type_id;
		wingpanel_services_interface_settings_type_id = g_type_register_static (GRANITE_SERVICES_TYPE_SETTINGS, "WingpanelServicesInterfaceSettings", &g_define_type_info, 0);
		g_once_init_leave (&wingpanel_services_interface_settings_type_id__volatile, wingpanel_services_interface_settings_type_id);
	}
	return wingpanel_services_interface_settings_type_id__volatile;
}


static void _vala_wingpanel_services_interface_settings_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	WingpanelServicesInterfaceSettings * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, WINGPANEL_SERVICES_TYPE_INTERFACE_SETTINGS, WingpanelServicesInterfaceSettings);
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	switch (property_id) {
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		case WINGPANEL_SERVICES_INTERFACE_SETTINGS_GTK_THEME:
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		g_value_set_string (value, wingpanel_services_interface_settings_get_gtk_theme (self));
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		break;
#line 434 "Settings.c"
		default:
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		break;
#line 440 "Settings.c"
	}
}


static void _vala_wingpanel_services_interface_settings_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	WingpanelServicesInterfaceSettings * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, WINGPANEL_SERVICES_TYPE_INTERFACE_SETTINGS, WingpanelServicesInterfaceSettings);
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
	switch (property_id) {
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		case WINGPANEL_SERVICES_INTERFACE_SETTINGS_GTK_THEME:
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		wingpanel_services_interface_settings_set_gtk_theme (self, g_value_get_string (value));
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		break;
#line 456 "Settings.c"
		default:
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/src/Services/Settings.vala"
		break;
#line 462 "Settings.c"
	}
}



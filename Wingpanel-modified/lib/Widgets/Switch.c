/* Switch.c generated by valac 0.34.4, the Vala compiler
 * generated from Switch.vala, do not modify */

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
#include <stdlib.h>
#include <string.h>


#define WINGPANEL_WIDGETS_TYPE_CONTAINER (wingpanel_widgets_container_get_type ())
#define WINGPANEL_WIDGETS_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WINGPANEL_WIDGETS_TYPE_CONTAINER, WingpanelWidgetsContainer))
#define WINGPANEL_WIDGETS_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WINGPANEL_WIDGETS_TYPE_CONTAINER, WingpanelWidgetsContainerClass))
#define WINGPANEL_WIDGETS_IS_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WINGPANEL_WIDGETS_TYPE_CONTAINER))
#define WINGPANEL_WIDGETS_IS_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WINGPANEL_WIDGETS_TYPE_CONTAINER))
#define WINGPANEL_WIDGETS_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WINGPANEL_WIDGETS_TYPE_CONTAINER, WingpanelWidgetsContainerClass))

typedef struct _WingpanelWidgetsContainer WingpanelWidgetsContainer;
typedef struct _WingpanelWidgetsContainerClass WingpanelWidgetsContainerClass;
typedef struct _WingpanelWidgetsContainerPrivate WingpanelWidgetsContainerPrivate;

#define WINGPANEL_WIDGETS_TYPE_SWITCH (wingpanel_widgets_switch_get_type ())
#define WINGPANEL_WIDGETS_SWITCH(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WINGPANEL_WIDGETS_TYPE_SWITCH, WingpanelWidgetsSwitch))
#define WINGPANEL_WIDGETS_SWITCH_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WINGPANEL_WIDGETS_TYPE_SWITCH, WingpanelWidgetsSwitchClass))
#define WINGPANEL_WIDGETS_IS_SWITCH(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WINGPANEL_WIDGETS_TYPE_SWITCH))
#define WINGPANEL_WIDGETS_IS_SWITCH_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WINGPANEL_WIDGETS_TYPE_SWITCH))
#define WINGPANEL_WIDGETS_SWITCH_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WINGPANEL_WIDGETS_TYPE_SWITCH, WingpanelWidgetsSwitchClass))

typedef struct _WingpanelWidgetsSwitch WingpanelWidgetsSwitch;
typedef struct _WingpanelWidgetsSwitchClass WingpanelWidgetsSwitchClass;
typedef struct _WingpanelWidgetsSwitchPrivate WingpanelWidgetsSwitchPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _WingpanelWidgetsContainer {
	GtkButton parent_instance;
	WingpanelWidgetsContainerPrivate * priv;
};

struct _WingpanelWidgetsContainerClass {
	GtkButtonClass parent_class;
};

struct _WingpanelWidgetsSwitch {
	WingpanelWidgetsContainer parent_instance;
	WingpanelWidgetsSwitchPrivate * priv;
};

struct _WingpanelWidgetsSwitchClass {
	WingpanelWidgetsContainerClass parent_class;
};

struct _WingpanelWidgetsSwitchPrivate {
	GtkLabel* button_label;
	GtkSwitch* button_switch;
};


static gpointer wingpanel_widgets_switch_parent_class = NULL;

GType wingpanel_widgets_container_get_type (void) G_GNUC_CONST;
GType wingpanel_widgets_switch_get_type (void) G_GNUC_CONST;
#define WINGPANEL_WIDGETS_SWITCH_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), WINGPANEL_WIDGETS_TYPE_SWITCH, WingpanelWidgetsSwitchPrivate))
enum  {
	WINGPANEL_WIDGETS_SWITCH_DUMMY_PROPERTY
};
WingpanelWidgetsSwitch* wingpanel_widgets_switch_new (const gchar* caption, gboolean active);
WingpanelWidgetsSwitch* wingpanel_widgets_switch_construct (GType object_type, const gchar* caption, gboolean active);
WingpanelWidgetsContainer* wingpanel_widgets_container_new (void);
WingpanelWidgetsContainer* wingpanel_widgets_container_construct (GType object_type);
GtkGrid* wingpanel_widgets_container_get_content_widget (WingpanelWidgetsContainer* self);
static GtkLabel* wingpanel_widgets_switch_create_label_for_caption (WingpanelWidgetsSwitch* self, const gchar* caption, gboolean use_mnemonic);
static GtkSwitch* wingpanel_widgets_switch_create_switch (WingpanelWidgetsSwitch* self, gboolean active);
static void wingpanel_widgets_switch_connect_signals (WingpanelWidgetsSwitch* self);
WingpanelWidgetsSwitch* wingpanel_widgets_switch_new_with_mnemonic (const gchar* caption, gboolean active);
WingpanelWidgetsSwitch* wingpanel_widgets_switch_construct_with_mnemonic (GType object_type, const gchar* caption, gboolean active);
void wingpanel_widgets_switch_set_caption (WingpanelWidgetsSwitch* self, const gchar* caption);
gchar* wingpanel_widgets_switch_get_caption (WingpanelWidgetsSwitch* self);
void wingpanel_widgets_switch_set_active (WingpanelWidgetsSwitch* self, gboolean active);
gboolean wingpanel_widgets_switch_get_active (WingpanelWidgetsSwitch* self);
GtkLabel* wingpanel_widgets_switch_get_label (WingpanelWidgetsSwitch* self);
GtkSwitch* wingpanel_widgets_switch_get_switch (WingpanelWidgetsSwitch* self);
void wingpanel_widgets_switch_toggle_switch (WingpanelWidgetsSwitch* self);
static void __lambda9_ (WingpanelWidgetsSwitch* self);
static void ___lambda9__gtk_button_clicked (GtkButton* _sender, gpointer self);
static void __lambda10_ (WingpanelWidgetsSwitch* self);
static void ___lambda10__g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self);
static void wingpanel_widgets_switch_finalize (GObject* obj);


WingpanelWidgetsSwitch* wingpanel_widgets_switch_construct (GType object_type, const gchar* caption, gboolean active) {
	WingpanelWidgetsSwitch * self = NULL;
	GtkGrid* content_widget = NULL;
	GtkGrid* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	GtkLabel* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	GtkSwitch* _tmp4_ = NULL;
	GtkLabel* _tmp5_ = NULL;
	GtkSwitch* _tmp6_ = NULL;
#line 27 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	g_return_val_if_fail (caption != NULL, NULL);
#line 27 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	self = (WingpanelWidgetsSwitch*) wingpanel_widgets_container_construct (object_type);
#line 28 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp0_ = wingpanel_widgets_container_get_content_widget ((WingpanelWidgetsContainer*) self);
#line 28 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	content_widget = _tmp0_;
#line 30 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp1_ = caption;
#line 30 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp2_ = wingpanel_widgets_switch_create_label_for_caption (self, _tmp1_, FALSE);
#line 30 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_g_object_unref0 (self->priv->button_label);
#line 30 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	self->priv->button_label = _tmp2_;
#line 31 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp3_ = active;
#line 31 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp4_ = wingpanel_widgets_switch_create_switch (self, _tmp3_);
#line 31 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_g_object_unref0 (self->priv->button_switch);
#line 31 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	self->priv->button_switch = _tmp4_;
#line 33 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp5_ = self->priv->button_label;
#line 33 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	gtk_grid_attach (content_widget, (GtkWidget*) _tmp5_, 0, 0, 1, 1);
#line 34 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp6_ = self->priv->button_switch;
#line 34 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	gtk_grid_attach (content_widget, (GtkWidget*) _tmp6_, 1, 0, 1, 1);
#line 36 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	wingpanel_widgets_switch_connect_signals (self);
#line 27 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_g_object_unref0 (content_widget);
#line 27 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	return self;
#line 159 "Switch.c"
}


WingpanelWidgetsSwitch* wingpanel_widgets_switch_new (const gchar* caption, gboolean active) {
#line 27 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	return wingpanel_widgets_switch_construct (WINGPANEL_WIDGETS_TYPE_SWITCH, caption, active);
#line 166 "Switch.c"
}


WingpanelWidgetsSwitch* wingpanel_widgets_switch_construct_with_mnemonic (GType object_type, const gchar* caption, gboolean active) {
	WingpanelWidgetsSwitch * self = NULL;
	GtkGrid* content_widget = NULL;
	GtkGrid* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	GtkLabel* _tmp2_ = NULL;
	gboolean _tmp3_ = FALSE;
	GtkSwitch* _tmp4_ = NULL;
	GtkLabel* _tmp5_ = NULL;
	GtkSwitch* _tmp6_ = NULL;
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	g_return_val_if_fail (caption != NULL, NULL);
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	self = (WingpanelWidgetsSwitch*) wingpanel_widgets_container_construct (object_type);
#line 40 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp0_ = wingpanel_widgets_container_get_content_widget ((WingpanelWidgetsContainer*) self);
#line 40 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	content_widget = _tmp0_;
#line 42 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp1_ = caption;
#line 42 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp2_ = wingpanel_widgets_switch_create_label_for_caption (self, _tmp1_, TRUE);
#line 42 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_g_object_unref0 (self->priv->button_label);
#line 42 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	self->priv->button_label = _tmp2_;
#line 43 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp3_ = active;
#line 43 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp4_ = wingpanel_widgets_switch_create_switch (self, _tmp3_);
#line 43 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_g_object_unref0 (self->priv->button_switch);
#line 43 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	self->priv->button_switch = _tmp4_;
#line 45 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp5_ = self->priv->button_label;
#line 45 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	gtk_grid_attach (content_widget, (GtkWidget*) _tmp5_, 0, 0, 1, 1);
#line 46 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp6_ = self->priv->button_switch;
#line 46 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	gtk_grid_attach (content_widget, (GtkWidget*) _tmp6_, 1, 0, 1, 1);
#line 48 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	wingpanel_widgets_switch_connect_signals (self);
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_g_object_unref0 (content_widget);
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	return self;
#line 218 "Switch.c"
}


WingpanelWidgetsSwitch* wingpanel_widgets_switch_new_with_mnemonic (const gchar* caption, gboolean active) {
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	return wingpanel_widgets_switch_construct_with_mnemonic (WINGPANEL_WIDGETS_TYPE_SWITCH, caption, active);
#line 225 "Switch.c"
}


void wingpanel_widgets_switch_set_caption (WingpanelWidgetsSwitch* self, const gchar* caption) {
	GtkLabel* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
#line 51 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	g_return_if_fail (self != NULL);
#line 51 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	g_return_if_fail (caption != NULL);
#line 52 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp0_ = self->priv->button_label;
#line 52 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp1_ = caption;
#line 52 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp2_ = g_markup_escape_text (_tmp1_, (gssize) -1);
#line 52 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp3_ = _tmp2_;
#line 52 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	gtk_label_set_label (_tmp0_, _tmp3_);
#line 52 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_g_free0 (_tmp3_);
#line 250 "Switch.c"
}


gchar* wingpanel_widgets_switch_get_caption (WingpanelWidgetsSwitch* self) {
	gchar* result = NULL;
	GtkLabel* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
#line 55 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 56 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp0_ = self->priv->button_label;
#line 56 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp1_ = gtk_label_get_label (_tmp0_);
#line 56 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp2_ = g_strdup (_tmp1_);
#line 56 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	result = _tmp2_;
#line 56 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	return result;
#line 271 "Switch.c"
}


void wingpanel_widgets_switch_set_active (WingpanelWidgetsSwitch* self, gboolean active) {
	GtkSwitch* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
#line 59 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	g_return_if_fail (self != NULL);
#line 60 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp0_ = self->priv->button_switch;
#line 60 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp1_ = active;
#line 60 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	gtk_switch_set_active (_tmp0_, _tmp1_);
#line 286 "Switch.c"
}


gboolean wingpanel_widgets_switch_get_active (WingpanelWidgetsSwitch* self) {
	gboolean result = FALSE;
	GtkSwitch* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
#line 63 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 64 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp0_ = self->priv->button_switch;
#line 64 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp1_ = gtk_switch_get_active (_tmp0_);
#line 64 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	result = _tmp1_;
#line 64 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	return result;
#line 304 "Switch.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 68 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	return self ? g_object_ref (self) : NULL;
#line 311 "Switch.c"
}


GtkLabel* wingpanel_widgets_switch_get_label (WingpanelWidgetsSwitch* self) {
	GtkLabel* result = NULL;
	GtkLabel* _tmp0_ = NULL;
	GtkLabel* _tmp1_ = NULL;
#line 67 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 68 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp0_ = self->priv->button_label;
#line 68 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 68 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	result = _tmp1_;
#line 68 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	return result;
#line 329 "Switch.c"
}


GtkSwitch* wingpanel_widgets_switch_get_switch (WingpanelWidgetsSwitch* self) {
	GtkSwitch* result = NULL;
	GtkSwitch* _tmp0_ = NULL;
	GtkSwitch* _tmp1_ = NULL;
#line 71 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 72 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp0_ = self->priv->button_switch;
#line 72 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 72 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	result = _tmp1_;
#line 72 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	return result;
#line 347 "Switch.c"
}


void wingpanel_widgets_switch_toggle_switch (WingpanelWidgetsSwitch* self) {
	GtkSwitch* _tmp0_ = NULL;
#line 75 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	g_return_if_fail (self != NULL);
#line 76 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp0_ = self->priv->button_switch;
#line 76 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	g_signal_emit_by_name (_tmp0_, "activate");
#line 359 "Switch.c"
}


static GtkLabel* wingpanel_widgets_switch_create_label_for_caption (WingpanelWidgetsSwitch* self, const gchar* caption, gboolean use_mnemonic) {
	GtkLabel* result = NULL;
	GtkLabel* label_widget = NULL;
	gboolean _tmp0_ = FALSE;
	GtkLabel* _tmp10_ = NULL;
	GtkLabel* _tmp11_ = NULL;
	GtkLabel* _tmp12_ = NULL;
	GtkLabel* _tmp13_ = NULL;
#line 79 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 79 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	g_return_val_if_fail (caption != NULL, NULL);
#line 82 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp0_ = use_mnemonic;
#line 82 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	if (_tmp0_) {
#line 379 "Switch.c"
		const gchar* _tmp1_ = NULL;
		gchar* _tmp2_ = NULL;
		gchar* _tmp3_ = NULL;
		GtkLabel* _tmp4_ = NULL;
		GtkLabel* _tmp5_ = NULL;
#line 83 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
		_tmp1_ = caption;
#line 83 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
		_tmp2_ = g_markup_escape_text (_tmp1_, (gssize) -1);
#line 83 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
		_tmp3_ = _tmp2_;
#line 83 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
		_tmp4_ = (GtkLabel*) gtk_label_new_with_mnemonic (_tmp3_);
#line 83 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
		g_object_ref_sink (_tmp4_);
#line 83 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
		_g_object_unref0 (label_widget);
#line 83 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
		label_widget = _tmp4_;
#line 83 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
		_g_free0 (_tmp3_);
#line 84 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
		_tmp5_ = label_widget;
#line 84 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
		gtk_label_set_mnemonic_widget (_tmp5_, (GtkWidget*) self);
#line 405 "Switch.c"
	} else {
		const gchar* _tmp6_ = NULL;
		gchar* _tmp7_ = NULL;
		gchar* _tmp8_ = NULL;
		GtkLabel* _tmp9_ = NULL;
#line 86 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
		_tmp6_ = caption;
#line 86 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
		_tmp7_ = g_markup_escape_text (_tmp6_, (gssize) -1);
#line 86 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
		_tmp8_ = _tmp7_;
#line 86 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
		_tmp9_ = (GtkLabel*) gtk_label_new (_tmp8_);
#line 86 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
		g_object_ref_sink (_tmp9_);
#line 86 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
		_g_object_unref0 (label_widget);
#line 86 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
		label_widget = _tmp9_;
#line 86 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
		_g_free0 (_tmp8_);
#line 427 "Switch.c"
	}
#line 89 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp10_ = label_widget;
#line 89 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	gtk_label_set_use_markup (_tmp10_, TRUE);
#line 90 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp11_ = label_widget;
#line 90 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	gtk_widget_set_halign ((GtkWidget*) _tmp11_, GTK_ALIGN_START);
#line 91 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp12_ = label_widget;
#line 91 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	gtk_widget_set_margin_start ((GtkWidget*) _tmp12_, 6);
#line 92 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp13_ = label_widget;
#line 92 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	gtk_widget_set_margin_end ((GtkWidget*) _tmp13_, 10);
#line 94 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	result = label_widget;
#line 94 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	return result;
#line 449 "Switch.c"
}


static GtkSwitch* wingpanel_widgets_switch_create_switch (WingpanelWidgetsSwitch* self, gboolean active) {
	GtkSwitch* result = NULL;
	GtkSwitch* switch_widget = NULL;
	GtkSwitch* _tmp0_ = NULL;
	gboolean _tmp1_ = FALSE;
#line 97 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 98 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp0_ = (GtkSwitch*) gtk_switch_new ();
#line 98 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	g_object_ref_sink (_tmp0_);
#line 98 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	switch_widget = _tmp0_;
#line 99 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp1_ = active;
#line 99 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	gtk_switch_set_active (switch_widget, _tmp1_);
#line 100 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	gtk_widget_set_halign ((GtkWidget*) switch_widget, GTK_ALIGN_END);
#line 101 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	gtk_widget_set_margin_end ((GtkWidget*) switch_widget, 6);
#line 102 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	gtk_widget_set_hexpand ((GtkWidget*) switch_widget, TRUE);
#line 104 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	result = switch_widget;
#line 104 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	return result;
#line 480 "Switch.c"
}


static void __lambda9_ (WingpanelWidgetsSwitch* self) {
#line 109 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	wingpanel_widgets_switch_toggle_switch (self);
#line 487 "Switch.c"
}


static void ___lambda9__gtk_button_clicked (GtkButton* _sender, gpointer self) {
#line 108 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	__lambda9_ ((WingpanelWidgetsSwitch*) self);
#line 494 "Switch.c"
}


static void __lambda10_ (WingpanelWidgetsSwitch* self) {
#line 113 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	g_signal_emit_by_name (self, "switched");
#line 501 "Switch.c"
}


static void ___lambda10__g_object_notify (GObject* _sender, GParamSpec* pspec, gpointer self) {
#line 112 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	__lambda10_ ((WingpanelWidgetsSwitch*) self);
#line 508 "Switch.c"
}


static void wingpanel_widgets_switch_connect_signals (WingpanelWidgetsSwitch* self) {
	GtkSwitch* _tmp0_ = NULL;
#line 107 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	g_return_if_fail (self != NULL);
#line 108 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	g_signal_connect_object ((GtkButton*) self, "clicked", (GCallback) ___lambda9__gtk_button_clicked, self, 0);
#line 112 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_tmp0_ = self->priv->button_switch;
#line 112 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	g_signal_connect_object ((GObject*) _tmp0_, "notify::active", (GCallback) ___lambda10__g_object_notify, self, 0);
#line 522 "Switch.c"
}


static void wingpanel_widgets_switch_class_init (WingpanelWidgetsSwitchClass * klass) {
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	wingpanel_widgets_switch_parent_class = g_type_class_peek_parent (klass);
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	g_type_class_add_private (klass, sizeof (WingpanelWidgetsSwitchPrivate));
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	G_OBJECT_CLASS (klass)->finalize = wingpanel_widgets_switch_finalize;
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	g_signal_new ("switched", WINGPANEL_WIDGETS_TYPE_SWITCH, G_SIGNAL_RUN_LAST, 0, NULL, NULL, g_cclosure_marshal_VOID__VOID, G_TYPE_NONE, 0);
#line 535 "Switch.c"
}


static void wingpanel_widgets_switch_instance_init (WingpanelWidgetsSwitch * self) {
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	self->priv = WINGPANEL_WIDGETS_SWITCH_GET_PRIVATE (self);
#line 542 "Switch.c"
}


static void wingpanel_widgets_switch_finalize (GObject* obj) {
	WingpanelWidgetsSwitch * self;
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, WINGPANEL_WIDGETS_TYPE_SWITCH, WingpanelWidgetsSwitch);
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_g_object_unref0 (self->priv->button_label);
#line 23 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	_g_object_unref0 (self->priv->button_switch);
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Switch.vala"
	G_OBJECT_CLASS (wingpanel_widgets_switch_parent_class)->finalize (obj);
#line 556 "Switch.c"
}


GType wingpanel_widgets_switch_get_type (void) {
	static volatile gsize wingpanel_widgets_switch_type_id__volatile = 0;
	if (g_once_init_enter (&wingpanel_widgets_switch_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (WingpanelWidgetsSwitchClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) wingpanel_widgets_switch_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (WingpanelWidgetsSwitch), 0, (GInstanceInitFunc) wingpanel_widgets_switch_instance_init, NULL };
		GType wingpanel_widgets_switch_type_id;
		wingpanel_widgets_switch_type_id = g_type_register_static (WINGPANEL_WIDGETS_TYPE_CONTAINER, "WingpanelWidgetsSwitch", &g_define_type_info, 0);
		g_once_init_leave (&wingpanel_widgets_switch_type_id__volatile, wingpanel_widgets_switch_type_id);
	}
	return wingpanel_widgets_switch_type_id__volatile;
}




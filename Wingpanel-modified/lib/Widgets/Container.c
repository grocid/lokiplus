/* Container.c generated by valac 0.34.4, the Vala compiler
 * generated from Container.vala, do not modify */

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


#define WINGPANEL_WIDGETS_TYPE_CONTAINER (wingpanel_widgets_container_get_type ())
#define WINGPANEL_WIDGETS_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), WINGPANEL_WIDGETS_TYPE_CONTAINER, WingpanelWidgetsContainer))
#define WINGPANEL_WIDGETS_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), WINGPANEL_WIDGETS_TYPE_CONTAINER, WingpanelWidgetsContainerClass))
#define WINGPANEL_WIDGETS_IS_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), WINGPANEL_WIDGETS_TYPE_CONTAINER))
#define WINGPANEL_WIDGETS_IS_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), WINGPANEL_WIDGETS_TYPE_CONTAINER))
#define WINGPANEL_WIDGETS_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), WINGPANEL_WIDGETS_TYPE_CONTAINER, WingpanelWidgetsContainerClass))

typedef struct _WingpanelWidgetsContainer WingpanelWidgetsContainer;
typedef struct _WingpanelWidgetsContainerClass WingpanelWidgetsContainerClass;
typedef struct _WingpanelWidgetsContainerPrivate WingpanelWidgetsContainerPrivate;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _WingpanelWidgetsContainer {
	GtkButton parent_instance;
	WingpanelWidgetsContainerPrivate * priv;
};

struct _WingpanelWidgetsContainerClass {
	GtkButtonClass parent_class;
};

struct _WingpanelWidgetsContainerPrivate {
	GtkGrid* content_widget;
};


static gpointer wingpanel_widgets_container_parent_class = NULL;

GType wingpanel_widgets_container_get_type (void) G_GNUC_CONST;
#define WINGPANEL_WIDGETS_CONTAINER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), WINGPANEL_WIDGETS_TYPE_CONTAINER, WingpanelWidgetsContainerPrivate))
enum  {
	WINGPANEL_WIDGETS_CONTAINER_DUMMY_PROPERTY
};
WingpanelWidgetsContainer* wingpanel_widgets_container_new (void);
WingpanelWidgetsContainer* wingpanel_widgets_container_construct (GType object_type);
static void wingpanel_widgets_container_set_style_classes (WingpanelWidgetsContainer* self);
GtkGrid* wingpanel_widgets_container_get_content_widget (WingpanelWidgetsContainer* self);
static void wingpanel_widgets_container_finalize (GObject* obj);


WingpanelWidgetsContainer* wingpanel_widgets_container_construct (GType object_type) {
	WingpanelWidgetsContainer * self = NULL;
	GtkGrid* _tmp0_ = NULL;
	GtkGrid* _tmp1_ = NULL;
	GtkGrid* _tmp2_ = NULL;
#line 23 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	self = (WingpanelWidgetsContainer*) g_object_new (object_type, NULL);
#line 24 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	_tmp0_ = (GtkGrid*) gtk_grid_new ();
#line 24 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	g_object_ref_sink (_tmp0_);
#line 24 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	_g_object_unref0 (self->priv->content_widget);
#line 24 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	self->priv->content_widget = _tmp0_;
#line 25 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	_tmp1_ = self->priv->content_widget;
#line 25 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	gtk_widget_set_hexpand ((GtkWidget*) _tmp1_, TRUE);
#line 27 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	_tmp2_ = self->priv->content_widget;
#line 27 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp2_);
#line 29 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	wingpanel_widgets_container_set_style_classes (self);
#line 23 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	return self;
#line 96 "Container.c"
}


WingpanelWidgetsContainer* wingpanel_widgets_container_new (void) {
#line 23 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	return wingpanel_widgets_container_construct (WINGPANEL_WIDGETS_TYPE_CONTAINER);
#line 103 "Container.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 33 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	return self ? g_object_ref (self) : NULL;
#line 110 "Container.c"
}


GtkGrid* wingpanel_widgets_container_get_content_widget (WingpanelWidgetsContainer* self) {
	GtkGrid* result = NULL;
	GtkGrid* _tmp0_ = NULL;
	GtkGrid* _tmp1_ = NULL;
#line 32 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 33 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	_tmp0_ = self->priv->content_widget;
#line 33 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 33 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	result = _tmp1_;
#line 33 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	return result;
#line 128 "Container.c"
}


static void wingpanel_widgets_container_set_style_classes (WingpanelWidgetsContainer* self) {
	GtkStyleContext* style_context = NULL;
	GtkStyleContext* _tmp0_ = NULL;
	GtkStyleContext* _tmp1_ = NULL;
#line 36 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	g_return_if_fail (self != NULL);
#line 37 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	_tmp0_ = gtk_widget_get_style_context ((GtkWidget*) self);
#line 37 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	_tmp1_ = _g_object_ref0 (_tmp0_);
#line 37 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	style_context = _tmp1_;
#line 38 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	gtk_style_context_add_class (style_context, GTK_STYLE_CLASS_MENUITEM);
#line 39 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	gtk_style_context_remove_class (style_context, GTK_STYLE_CLASS_BUTTON);
#line 40 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	gtk_style_context_remove_class (style_context, "text-button");
#line 36 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	_g_object_unref0 (style_context);
#line 152 "Container.c"
}


static void wingpanel_widgets_container_class_init (WingpanelWidgetsContainerClass * klass) {
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	wingpanel_widgets_container_parent_class = g_type_class_peek_parent (klass);
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	g_type_class_add_private (klass, sizeof (WingpanelWidgetsContainerPrivate));
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	G_OBJECT_CLASS (klass)->finalize = wingpanel_widgets_container_finalize;
#line 163 "Container.c"
}


static void wingpanel_widgets_container_instance_init (WingpanelWidgetsContainer * self) {
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	self->priv = WINGPANEL_WIDGETS_CONTAINER_GET_PRIVATE (self);
#line 170 "Container.c"
}


static void wingpanel_widgets_container_finalize (GObject* obj) {
	WingpanelWidgetsContainer * self;
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, WINGPANEL_WIDGETS_TYPE_CONTAINER, WingpanelWidgetsContainer);
#line 21 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	_g_object_unref0 (self->priv->content_widget);
#line 20 "/home/carl/Hämtningar/wingpanel-2.0.1/lib/Widgets/Container.vala"
	G_OBJECT_CLASS (wingpanel_widgets_container_parent_class)->finalize (obj);
#line 182 "Container.c"
}


GType wingpanel_widgets_container_get_type (void) {
	static volatile gsize wingpanel_widgets_container_type_id__volatile = 0;
	if (g_once_init_enter (&wingpanel_widgets_container_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (WingpanelWidgetsContainerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) wingpanel_widgets_container_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (WingpanelWidgetsContainer), 0, (GInstanceInitFunc) wingpanel_widgets_container_instance_init, NULL };
		GType wingpanel_widgets_container_type_id;
		wingpanel_widgets_container_type_id = g_type_register_static (gtk_button_get_type (), "WingpanelWidgetsContainer", &g_define_type_info, 0);
		g_once_init_leave (&wingpanel_widgets_container_type_id__volatile, wingpanel_widgets_container_type_id);
	}
	return wingpanel_widgets_container_type_id__volatile;
}




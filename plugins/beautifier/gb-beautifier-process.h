/* gb-beautifier-process.h
 *
 * Copyright (C) 2016 sebastien lafargue <slafargue@gnome.org>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GB_BEAUTIFIER_PROCESS_H
#define GB_BEAUTIFIER_PROCESS_H

#include <glib-object.h>

#include "gb-beautifier-config.h"
#include "gb-beautifier-workbench-addin.h"

G_BEGIN_DECLS

void          gb_beautifier_process_launch_async      (GbBeautifierWorkbenchAddin  *self,
                                                       IdeSourceView               *source_view,
                                                       GtkTextIter                 *begin,
                                                       GtkTextIter                 *end,
                                                       GbBeautifierConfigEntry     *entry,
                                                       GAsyncReadyCallback          callback,
                                                       GCancellable                *cancellable,
                                                       gpointer                     user_data);
gboolean      gb_beautifier_process_launch_finish     (GbBeautifierWorkbenchAddin  *self,
                                                       GAsyncResult                *result,
                                                       GError                     **error);

G_END_DECLS

#endif /* GB_BEAUTIFIER_PROCESS_H */
